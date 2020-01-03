#include <iostream>
#include<vector>
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
    void helper(int, int, int&);
public:
    Graph(int V);   // Constructor

    // function to add an edge to graph
    void addEdge(int v, int w);
    int detect_cycle();
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

int Graph::detect_cycle(){
  int i;
  int res = 0;
  for(i=0;i<V;i++){
    clearvisited();
    helper(i,i,res);
  }
  return res;
}

void Graph::helper(int start, int parent, int &res){
  visited[start] = 1;
  list<int>::iterator it;
  for(it = adj[start].begin(); it != adj[start].end();++it){
    if (visited[*it] == 1 && *it != parent){
      res = 1;
      break;
    } else if (visited[*it] == 0 && *it != parent){
      helper(*it, start, res);
    }
  }
}

int main(){
  // Create a graph given in the above diagram
  Graph g(5);
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(0, 3);
  g.addEdge(1, 0);
  g.addEdge(1, 2);
  g.addEdge(2, 0);
  g.addEdge(2, 1);
  g.addEdge(3, 0);
  g.addEdge(3, 4);
  g.addEdge(4, 3);
  int r;
  r = g.detect_cycle();
  if (r)
    cout<<"contains cycle\n";
  else
    cout<<"does not contain cycle\n";
}
