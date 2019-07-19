#include<bits/stdc++.h>

using namespace std;

void printk(priority_queue<int,vector<int>,greater<int> > pq){
    
    while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
}
}

int main(){
    priority_queue<int,vector<int>,greater<int> > pq;
    int no;
    int cnt = 0;
    int k;
    cin>>k;

    while(scanf("%d",&no)!=EOF){
        if(no==-1){
            printk(pq);
        }
        else if(cnt<k){
            pq.push(no);
            cnt++;
        }
        else{
            if(no>pq.top()){
            pq.pop();
            pq.push(no);
        }
        }
    }

    return 0;
}