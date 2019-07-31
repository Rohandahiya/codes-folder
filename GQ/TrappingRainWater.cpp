#include<bits/stdc++.h>
using namespace std;

int totalTrappedWater(int heights[],int n){
    int left[n];
    int right[n];
    left[0]=heights[0];
    for(int i=1;i<n;i++){
        left[i]=max(heights[i],left[i-1]);
    }
    right[n-1]=heights[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=max(heights[i],right[i+1]);
    }
    int water=0;
    for (int i = 0; i < n; i++)
       water += min(left[i],right[i]) - heights[i];
return water;
}

int main(){
    int n;cin>>n;int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
     cout<<totalTrappedWater(arr,n);
    return 0;
}
