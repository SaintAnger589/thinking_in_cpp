#include<iostream>
#include <list>

using namespace std;

class Graph
{
    int V;    // No. of vertices

    // Pointer to an array containing
    // adjacency lists
    list<int> *adj;
    int *visited;

    // A recursive function used by DFS
    void helper(int, bool&);
public:
    Graph(int V);   // Constructor

    // function to add an edge to graph
    void addEdge(int v, int w);
    bool iscycle();
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

void Graph::clearvisited(){
  int i;
  for(i=0;i<V;i++){
    visited[i] = 0;
  }
}

void Graph::printvisited(){
  int i;
  for(i=0;i<V;i++){
    cout<<"visited["<<i<<"] = "<<visited[i];
    cout<<"\n";
  }
}

bool Graph::iscycle(){
  //printvisited();
  bool res = false;
  int i;
  for(i=0;i<V;i++){
    cout<<"i = "<<i<<"\n";
    clearvisited();
    helper(i, res);
    cout<<"res = "<<res<<"\n";
    cout<<"\n";
  }
  return res;
}

void Graph::helper(int start, bool &res){
  cout<<"start = "<<start<<"\n";
  if (visited[start] == 1){
    res = 1;
    return;
  }
  visited[start] = 1;
  list<int>::iterator it;
  for(it = adj[start].begin();it != adj[start].end();++it){
    if (visited[*it]){
      res = 1;
      break;
    } else if (!(res)){
      helper(*it, res);
      visited[*it] = 0;
    }
  }
}

int main(){
  // Create a graph given in the above diagram
  Graph g(4);
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 0);
  g.addEdge(2, 3);
  bool r;
  r = g.iscycle();
  cout<<"cycle = "<<r<<"\n";

}
