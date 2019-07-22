#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n,flag=1;
    cin>>n;
    
    unordered_map<int,int> m;
    while(n--){
        int num;
        cin>>num;
        m[num]++;
        if(m[num]>2){
            flag=0;break;
        }
    }
    /*/for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    for(int i=0;i<n;i++){
        if(m[a[i]]==3){
            flag=0;
        }
    }*/
    if(flag)cout<<"true";
    else cout<<"false";
    
    return 0;
}