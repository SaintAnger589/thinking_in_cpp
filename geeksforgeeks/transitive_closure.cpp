#include <iostream>
#include<list>
#include <vector>
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
    vector<vector<int>> transitive();
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

vector<vector<int>> Graph::transitive(){
  //cout<<"inside checkmother()\n";
  int i;
  vector<vector<int>> res;
  std::vector<int> temp1;
  for(i=0;i<V;i++){
    clearvisited();
    temp1.erase(temp1.begin(), temp1.end());
    visited[i] = 1;
    DFSUtil(i);
    //printvisited();
    //res = new int[V];
    for(int j=0;j<V;j++){
      temp1.push_back(visited[j]);
    }
    res.push_back(temp1);
  }
    return res;
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
void Graph::DFSUtil(int v){
  //cout<<"DFSUtil v = "<<v<<"\n";
  visited[v] = 1;
  //cout<<v<<"\t";
  list<int>::iterator it;
  for(it = adj[v].begin(); it != adj[v].end();++it){
    if (visited[*it] == 0){
      DFSUtil(*it);
    }
  }
}
// Driver code
int main()
{
    // Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 2);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(2, 0);

    vector<vector<int>> temp;
    temp = g.transitive();

    int i, j;
    int leni = temp.size();
    int lenj = sizeof(temp[0])/sizeof(int);
    //cout<<"lenj = "<<lenj<<"\n";
    //cout<<"leni = "<<leni<<"\n";

    for(i=0;i<leni;i++){
      for(j=0;j<leni;j++){
        cout<<temp[i][j]<<"\t";
      }
      cout<<"\n";
    }

    return 0;
}
