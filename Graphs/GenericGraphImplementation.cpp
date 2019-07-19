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
    Graph<string> g;
    g.addEdge("Putin","Modi",false);
    g.addEdge("Putin","Trump",false);
    g.addEdge("Putin","Pope",false);
    g.addEdge("Modi","Trump",true);
    g.addEdge("Modi","Yogi",true);
    g.addEdge("Prabhu","Modi",false);
    g.addEdge("Yogi","Prabhu",false);

    g.printgraph();

    g.bfs("Putin");


}
