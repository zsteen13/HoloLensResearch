using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;

public class Grid : MonoBehaviour
{
	public Transform player;
	public LayerMask unwalkableMask;
	public Vector2 gridWorldSize;
	public float nodeRadius;
	public Node[,] grid;

	float nodeDiameter;
	int gridSizeX;
	int gridSizeY;
	public int height;

	Node prevPlayerNode;

	void Start()
	{
		nodeDiameter = nodeRadius * 2;
		gridSizeX = Mathf.RoundToInt(gridWorldSize.x / nodeDiameter);
		gridSizeY = Mathf.RoundToInt(gridWorldSize.y / nodeDiameter);
		CreateGrid();
		prevPlayerNode = NodeFromWorldPoint(player.position);
		prevPlayerNode.walkable = false;
	}
	
	void Update()
    {
		Node currPlayerNode = NodeFromWorldPoint(player.position);
		if (currPlayerNode != prevPlayerNode)
        {
			prevPlayerNode.walkable = true;
			prevPlayerNode = currPlayerNode;
			currPlayerNode.walkable = false;
        }
		foreach (Node n in grid)
        {
			n.eyePath = eyegazePath.Contains(n);
        }
	}

	public int MaxSize
	{
		get
		{
			return gridSizeX * gridSizeY;
		}
	}

	void CreateGrid()
	{
		grid = new Node[gridSizeX, gridSizeY];
		Vector3 worldBottomLeft = transform.position - Vector3.right * gridWorldSize.x / 2 - Vector3.forward * gridWorldSize.y / 2;

		for (int x = 0; x < gridSizeX; x++)
		{
			for (int y = 0; y < gridSizeY; y++)
			{
				Vector3 worldPoint = worldBottomLeft + Vector3.right * (x * nodeDiameter + nodeRadius) + Vector3.forward * (y * nodeDiameter + nodeRadius);
				bool walkable = !(Physics.CheckSphere(worldPoint, nodeRadius, unwalkableMask));
				if (x == 0 || y == 0 || x == gridSizeX - 1 || y == gridSizeY - 1)
                {
					walkable = false;
                }
				grid[x, y] = new Node(walkable, worldPoint, x, y);
			}
		}
	}

	public List<Node> GetNeighbors(Node node, bool diags = true)
    {
		List<Node> neighbors = new List<Node>();

		for (int x = -1; x <= 1; x++)
        {
			for (int y = -1; y <= 1; y++)
			{
				if (x == 0 && y == 0)
                {
					continue;
                }

				if (!diags && Math.Abs(x) == 1 && Math.Abs(y) == 1)
                {
					continue;
                }

				int checkX = node.gridX + x;
				int checkY = node.gridY + y;
				
				if (checkX >= 0 && checkX < gridSizeX && checkY >= 0 && checkY < gridSizeY)
                {
					neighbors.Add(grid[checkX, checkY]);
                }
			}
		}

		return neighbors;
    }

	public Node NodeFromWorldPoint(Vector3 worldPosition)
	{ 
		float percentX = (worldPosition.x + gridWorldSize.x / 2) / gridWorldSize.x;
		float percentY = (worldPosition.z + gridWorldSize.y / 2) / gridWorldSize.y;
		percentX = Mathf.Clamp01(percentX);
		percentY = Mathf.Clamp01(percentY);

		int x = Mathf.RoundToInt((gridSizeX - 1) * percentX);
		int y = Mathf.RoundToInt((gridSizeY - 1) * percentY);

		return grid[x, y];
	}

	public List<Node> path;
	public List<Node> eyegazePath;
	void OnDrawGizmos()
	{
		Gizmos.DrawWireCube(transform.position, new Vector3(gridWorldSize.x, height, gridWorldSize.y));

		if (grid != null)
		{
			//Node playerNode = NodeFromWorldPoint(player.position);
			foreach (Node n in grid)
			{
				Gizmos.color = (n.walkable) ? Color.white : Color.red;
				//if (playerNode == n)
                //{
				//	Gizmos.color = Color.cyan;
                //}
				if (path != null)
                {
					if (path.Contains(n))
                    {
						Gizmos.color = Color.black;
                    }
                }

				if (eyegazePath != null)
                {
					if (eyegazePath.Contains(n))
                    {
						Gizmos.color = Color.blue;
                    }
                }
				Gizmos.DrawCube(n.worldPosition, new Vector3(1, 0, 1) * (nodeDiameter - .1f));
			}
		}
	}
}



public class Node : IHeapItem<Node>
{
	public bool walkable;
	public bool eyePath;
	public Vector3 worldPosition;
	public int gridX;
	public int gridY;

	public int gCost;
	public int hCost;
	public Node parent;
	int heapIndex;

	public Node(bool _walkable, Vector3 _worldPos, int _gridX, int _gridY)
	{
		walkable = _walkable;
		worldPosition = _worldPos;
		gridX = _gridX;
		gridY = _gridY;
		eyePath = false;
	}

	public int fCost
    {
		get
        {
			return gCost + hCost;
        }
    }

	public int HeapIndex
    {
        get
        {
			return heapIndex;
        }
        set
        {
			heapIndex = value;
        }
    }

	public int CompareTo(Node nodeToCompare)
    {
		int compare = fCost.CompareTo(nodeToCompare.fCost);
		if (compare == 0)
        {
			compare = hCost.CompareTo(nodeToCompare.hCost);
        }
		return -compare;
    }
} 