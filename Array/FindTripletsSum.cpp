#include<bits/stdc++.h>
using namespace std;

void findTriplets(int *arr,int n,int sum){
    sort(arr,arr+n);
    int pair_sum;
    for(int i=0;i<n;i++){
        pair_sum = sum - arr[i];
        int s=0,l=n-1;
        while(s<=l){
            if(arr[s]+arr[l]==pair_sum){
                if(arr[s]==arr[l] || arr[i]==arr[s] || arr[i]==arr[l]){
                    s++;l--;}
                else {
                    if(min(arr[l],min(arr[i],arr[s]))==arr[i])
                        cout<<arr[i]<<", "<<arr[s]<<" and "<<arr[l]<<endl;
                        s++;l--;
                }
            }
            else if(arr[s]+arr[l]>pair_sum)l--;
            else s++;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    findTriplets(arr,n,sum);

    return 0;
}