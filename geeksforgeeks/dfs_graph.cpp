#include <iostream>
#include<list>
using namespace std;

class Graph
{
    int V;    // No. of vertices

    // Pointer to an array containing
    // adjacency lists
    list<int> *adj;

    // A recursive function used by DFS
    void DFSUtil(int v, bool visited[]);
public:
    Graph(int V);   // Constructor

    // function to add an edge to graph
    void addEdge(int v, int w);

    // DFS traversal of the vertices
    // reachable from v
    void DFS(int v);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

void Graph::DFS(int v){
  //no of vertices is defined
  bool *visited = new bool[V];
  int i;
  for(i=0;i<V;i++){
    visited[i] = false;
  }
  DFSUtil(v, visited);
}
void Graph::DFSUtil(int v, bool visited[]){
  visited[v] = true;
  cout<<v<<"\t";
  while (adj[v].size() > 0){
    int temp = adj[v].back();
    adj[v].pop_back();
    if (visited[temp] == false){
      DFSUtil(temp, visited);
    }
  }
}
// Driver code
int main()
{
    // Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
    g.DFS(2);

    return 0;
}
