#include<iostream>
using namespace std;

int pivotRotated(int arr[],int n){
    int s=0,l=n-1,mid;

    while(s<=l){
        mid = s + (l-s)/2;
        if(arr[mid]>arr[mid+1])return mid+1;
        
        if(arr[s]<=arr[mid]){
            s=mid+1;
        }else{
            l=mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[]={101,123,313,431,20,30,49};
    cout<<pivotRotated(arr,7);
    return 0;
}