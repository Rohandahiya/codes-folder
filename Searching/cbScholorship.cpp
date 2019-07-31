#include<iostream>
using namespace std;

bool isValid(int n,int m,int x,int y,int mid){
    int rem = n-mid;
    int v = x*mid;
    int amt = rem*y;
    int total = amt+m;
    if(v<=total)return true;
    else return false;
}

int maxSchlorship(int n,int m,int x,int y){
    int s=0,l=n,mid,ans=-1;

    while(s<=l){
        mid = s + (l-s)/2;

        if(isValid(n,m,x,y,mid)){
            ans=mid;
            s=mid+1;
        }else{
            l=mid-1;
        }

    }
    return ans;
}

int main(){
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    cout<<maxSchlorship(n,m,x,y);
    return 0;
}