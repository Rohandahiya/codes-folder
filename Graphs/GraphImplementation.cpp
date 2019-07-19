#include<bits/stdc++.h>

using namespace std;

void addEdge(list<int> adj[],int u, int v,bool bidir=true){
adj[u].push_back(v);
if(bidir)
{
adj[v].push_back(u);
}
}

void printgraph(list<int> adj[],int V){
    for(int i=0;i<V;i++){
        cout<<"\n Adjacency list of vertex" << i << "\n head";
        for(int vertex:adj[i])
        {
            cout << "->" <<vertex;

        }
    }
}

int main(){

int V = 5;
list <int> adj[V];
addEdge(adj, 0, 1,true);
    addEdge(adj, 0, 4,true);
    addEdge(adj, 1, 2,true);
    addEdge(adj, 1, 3,true);
    addEdge(adj, 1, 4,true);
    addEdge(adj, 2, 3,true);
    addEdge(adj, 3, 4,true);
    printgraph(adj,V);
} 	
