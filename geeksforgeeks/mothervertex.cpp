#include <iostream>
#include<list>
using namespace std;

class Graph
{
    int V;    // No. of vertices

    // Pointer to an array containing
    // adjacency lists
    list<int> *adj;
    int *visited;

    // A recursive function used by DFS
    void DFSUtil(int v);
public:
    Graph(int V);   // Constructor

    // function to add an edge to graph
    void addEdge(int v, int w);

    // DFS traversal of the vertices
    // reachable from v
    //void DFS(int v);
    int mothervertex();
    bool checkmother();
    void clearvisited();
    void printvisited();

};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
    visited = new int[V];
    int i;
    for(i = 0;i < V;i++){
      //cout<<"Constructor  i = "<<i<<"\n";
      visited[i] = 0;
    }
}


void Graph::addEdge(int v, int w)
{
    adj[v].push_back(w); // Add w to v’s list.
}

bool Graph::checkmother(){
  //cout<<"inside checkmother()\n";
  int i;
  for(i=0;i<V;i++){
    //cout<<"visited["<<i<<"] = "<<visited[i]<<"\t";
    if (visited[i] == false){
      //cout<<"\n";
      return false;
    }
  }
  //cout<<"\n";
  return true;
}
void Graph::clearvisited(){
  int i;
  for(i=0;i<V;i++){
    visited[i] = 0;
  }
}

int Graph::mothervertex(){
  //vector<int>::iterator it;
  //for(it = adj.begin();it != adj.end();++it){
  int it;
  for(it = 0; it < V;it++){
    //cout<<"it = "<<it<<"\n";
    visited[it] = 1;
    DFSUtil(it);
    //cout<<"\n";
    if (checkmother())
      return it;
    else {
      clearvisited();
    }
  }
  return -1;
}
void Graph::printvisited(){
  int i;
  for(i=0;i<V;i++){
    cout<<"visited["<<i<<"] = "<<visited[i];
    cout<<"\n";
  }
}
void Graph::DFSUtil(int v){
  //cout<<"DFSUtil v = "<<v<<"\n";
  visited[v] = true;
  //cout<<v<<"\t";
  list<int>::iterator it;
  for(it = adj[v].begin(); it != adj[v].end();++it){
    if (visited[*it] == false){
      DFSUtil(*it);
    }
  }
}
// Driver code
int main()
{
    // Create a graph given in the above diagram
    Graph g(7);
    g.addEdge(0, 2);
    g.addEdge(0, 1);
    g.addEdge(1, 3);
    g.addEdge(4, 1);
    g.addEdge(5, 2);
    g.addEdge(5, 6);
    g.addEdge(6, 0);
    g.addEdge(6, 4);

    cout<<"motherVertex = "<<g.mothervertex()<<"\n";

    return 0;
}
