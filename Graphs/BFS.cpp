#include<bits/stdc++.h>
using namespace std;

template<typename T>

class Graph{

map<T, list<T> > adjlist;

public:
Graph(){
}

void addEdge(T u, T v, bool bidir=true){

    adjlist[u].push_back(v);
    if(bidir){
        adjlist[v].push_back(u);
    }

}

void printgraph(){
    for(auto i:adjlist)
    {
        cout<<i.first<<"->";

        for(auto entry:i.second){
            cout<<entry<<",";
        }
        cout<<endl;
    }
}

void bfs(T src){

    queue<T> q;
    map<T,bool> visited;

    q.push(src);
    visited[src]=true;

    while(!q.empty()){
        T node = q.front();
        cout<<node<<" ";
        q.pop();


        for(auto neigbour:adjlist[node]){
            if(!visited[neigbour]){
            q.push(neigbour);
            visited[neigbour]=true;
            }
        }

    }

}

    };

int main()
{
    Graph<int> g;
    g.addEdge(0, 4,true);
    g.addEdge(1, 2,true);
    g.addEdge(1, 3,true);
    g.addEdge(1, 4,true);
    g.addEdge(2, 3,true);
    g.addEdge(3, 4,true);

    g.printgraph();

    g.bfs(0);


}
