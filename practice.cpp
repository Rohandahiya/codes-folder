#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n,t,num;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>t;
    while(t--){
        cin>>num;
        int low = lower_bound(arr,arr+n,num)-arr;
        int high = upper_bound(arr,arr+n,num)-arr;
        if(low==n){cout<<"-1 ";}
        else{
            cout<<low<<" ";
        }

        if(high==n){cout<<"-1";}
        else{
            cout<<high-1<<endl;
        }
    }
    return 0;
}