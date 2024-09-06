#include <iostream>
#include <vector>
#include <climits>

using namespace std;

const int V = 5;

int findMinVertex(vector<int> &key, vector<bool> &mstSet)
{
  int min = INT_MAX, minIndex;

  for (int v = 0; v < V; v++)
  {
    if (!mstSet[v] && key[v] < min)
    {
      min = key[v];
      minIndex = v;
    }
  }

  return minIndex;
}

void primMST(int graph[V][V])
{
  vector<int> parent(V);         // Array to store the MST
  vector<int> key(V, INT_MAX);   // Key values used to pick the minimum weight edge
  vector<bool> mstSet(V, false); // To represent the set of vertices not yet included in MST

  key[0] = 0;     // Start from the first vertex
  parent[0] = -1; // The first vertex is always the root of the MST

  for (int count = 0; count < V - 1; count++)
  {
    int u = findMinVertex(key, mstSet); // Pick the minimum key vertex not yet included in MST
    mstSet[u] = true;                   // Add the vertex to the MST set

    // Update key values and parent index of the adjacent vertices
    for (int v = 0; v < V; v++)
    {
      if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v])
      {
        parent[v] = u;
        key[v] = graph[u][v];
      }
    }
  }

  cout << "Edge \tWeight\n";
  for (int i = 1; i < V; i++)
  {
    cout << parent[i] << " - " << i << "\t" << graph[i][parent[i]] << "\n";
  }
}

int main()
{
  // Adjacency matrix representation of the graph
  int graph[V][V] = {
      {0, 2, 0, 6, 0},
      {2, 0, 3, 8, 5},
      {0, 3, 0, 0, 7},
      {6, 8, 0, 0, 9},
      {0, 5, 7, 9, 0}};

  primMST(graph);

  return 0;
}
