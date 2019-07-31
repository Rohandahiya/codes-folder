#include<iostream>
using namespace std;

int kadane(int arr[],int n){
    int curr_sum=0;
    int max_sum=0;
    for(int i=0;i<n;i++){
        curr_sum += arr[i];
        if(curr_sum>max_sum)max_sum=curr_sum;
        if(curr_sum<0)curr_sum=0;
    }
    return max_sum;
}

int maximumInCircular(int arr[],int n){
    int kadane_max = kadane(arr,n);
    int sum = 0,max_wrap;

    for(int i=0;i<n;i++){
        sum+=arr[i];
        arr[i]=-arr[i];
    }

     max_wrap = sum + kadane(arr,n);
     return (max_wrap>kadane_max)?max_wrap:kadane_max;
}

int main(){
    int arr[]={8,-8,9,-9,10,-11,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    //cout<<kadane(arr,n)<<endl;
    cout<<maximumInCircular(arr,n);
    return 0;
}