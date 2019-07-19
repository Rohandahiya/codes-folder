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
    map<T,int> dist;
    map<T,T> parent;

    for(auto i:adjlist){
        dist[i.first]=INT_MAX;
    }

    q.push(src);
    dist[src]=0;
    parent[src] = src;

    while(!q.empty()){
        T node = q.front();
        q.pop();


        for(int neigbour:adjlist[node]){
            if(dist[neigbour]==INT_MAX){
            q.push(neigbour);
            dist[neigbour]=dist[node]+1;
            parent[neigbour] = node;
            }
        }


    }

    for(auto i:adjlist){
            T node = i.first;
            cout<<"Distance of "<<node<<" from "<< src << " is "<<dist[node]<<endl;

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



    g.bfs(0);


}
