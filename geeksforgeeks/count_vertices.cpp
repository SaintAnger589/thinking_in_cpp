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
    void helper(int, int, vector<vector<int>>&, vector<int>&);
public:
    Graph(int V);   // Constructor

    // function to add an edge to graph
    void addEdge(int v, int w);
    vector<vector<int>> all_vertices(int, int);
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

vector<vector<int>> Graph::all_vertices(int start, int end){
  vector<vector<int>> res;
  vector<int> help;
  helper(start, end, res, help);
  return res;
}

void Graph:: helper(int start, int end, vector<vector<int>> &res, vector<int> &help ){
  //cout<<"helper\n";
  //cout<<"start = "<<start<<"\n";
  //cout<<"end = "<<end<<"\n";
  //cout<<"\n";
  help.push_back(start);
  if(start == end){
    //help.push_back(end);
    res.push_back(help);
    //help.pop_back();
    //help.erase(help.begin(), help.end());
    visited[start] = 0;
    return;
  } else {
    visited[start] = 1;
    //help.push_back()
    //vector<int>::iterator it;
    list<int>::iterator it;
    for(it = adj[start].begin(); it != adj[start].end();++it){
      if (!visited[*it]){
        helper(*it, end, res, help);
        if (help.size() > 0)
          help.pop_back();
      }
      visited[*it] = 0;
    }
  }
}

int main(){
  // Create a graph given in the above diagram
  Graph g(5);
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(0, 4);
  g.addEdge(1, 4);
  g.addEdge(1, 3);
  g.addEdge(2, 4);
  g.addEdge(3, 2);
  vector<vector<int>> r;
  r = g.all_vertices(0,4);
  int len = r.size();
  int i;
  for(i=0;i<len;i++){
    vector<int>::iterator it1;
    for(it1 = r[i].begin(); it1 != r[i].end();++it1){
      cout<<*it1<<"\t";
    }
    cout<<"\n";
  }
}
