#include<bits/stdc++.h>
using namespace std;

bool isValid(int stalls[],int n,int m,int mid){
    int cows=1;
    int first_cow = stalls[0];
    for(int i=1;i<=(n-1);i++){
        int current_cow = stalls[i];
        if(current_cow-first_cow>=mid){
            cows++;
            first_cow = current_cow;
            if(cows==m)return true;
        }
    }
    return false;
}

int minLargestdist(int stalls[],int n,int m){
    int s=0,l=stalls[n-1]-stalls[0],mid,ans=0;

    while(s<=l){
        mid = s + (l-s)/2;
        
        if(isValid(stalls,n,m,mid)){
            ans = mid;
            s = mid+1;
        }else{
            l= mid-1;
        }

    }
    return ans;
}

int main(){
    int n,m;
    cin>>n>>m;
    int stalls[n];
    for(int i=0;i<n;i++){
        cin>>stalls[i];
    }
    sort(stalls,stalls+n);
    cout<<minLargestdist(stalls,n,m);
    return 0;
}