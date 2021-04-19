using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Pathfinding : MonoBehaviour
{

	public Transform seeker;
	public Transform target;
	Grid grid;

	void Awake()
	{
		grid = GetComponent<Grid>();
	}

	void Update()
	{
		FindPath(seeker.position, target.position);
	}

	void FindPath(Vector3 startPos, Vector3 targetPos)
	{
		Node startNode = grid.NodeFromWorldPoint(startPos);
		Node targetNode = grid.NodeFromWorldPoint(targetPos);

		Heap<Node> openSet = new Heap<Node>(grid.MaxSize);
		HashSet<Node> closedSet = new HashSet<Node>();
		openSet.Add(startNode);

		while (openSet.Count > 0)
		{
			Node node = openSet.RemoveFirst();
			closedSet.Add(node);

			if (node == targetNode)
			{
				RetracePath(startNode, targetNode);
				return;
			}

			foreach (Node neighbor in grid.GetNeighbors(node))
			{
				if (!neighbor.walkable || neighbor.eyePath || closedSet.Contains(neighbor))
				{
					continue;
				}

				int newCostToNeighbor = node.gCost + GetDistance(node, neighbor);
				if (newCostToNeighbor < neighbor.gCost || !openSet.Contains(neighbor))
				{
					neighbor.gCost = newCostToNeighbor;
					neighbor.hCost = GetDistance(neighbor, targetNode);
					neighbor.parent = node;

					if (!openSet.Contains(neighbor))
                    {
						openSet.Add(neighbor);
					}
				}
			}
		}
	}

	void RetracePath(Node startNode, Node endNode)
	{
		List<Node> path = new List<Node>();
		Node currentNode = endNode;

		while (currentNode != startNode)
		{
			path.Add(currentNode);
			currentNode = currentNode.parent;
		}
		path.Reverse();

		grid.path = path;
	}

	int GetDistance(Node nodeA, Node nodeB)
	{
		int dstX = Mathf.Abs(nodeA.gridX - nodeB.gridX);
		int dstY = Mathf.Abs(nodeA.gridY - nodeB.gridY);

		if (dstX > dstY)
        {
			return 14 * dstY + 10 * (dstX - dstY);
		}
		return 14 * dstX + 10 * (dstY - dstX);
	}
}

