#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;

/* ll powerN(ll a,ll r){
    if(r==0)return 1;
    ll subprob = powerN(a,r/2);
    subprob = subprob*subprob;
    if(r&1){
        return  a*subprob;
    }
    return subprob;
}*/

ll kth_root(ll n,int k){

    ll s=0,l=n,val=1,ans=-1;
    ll mid;

    while(s<=l){
        mid = s + (l-s)/2;
        val = log10(mid);
        if(k*val>log10(n)){
            l=mid-1;
        }
        else if(k*val<=log10(n)){
            ans=mid;
            s=mid+1;
        }/* else{
            ans=mid;
            break;
        }*/
    }
return ans;
}

int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<kth_root(n,k);
    }
    
return 0;
}