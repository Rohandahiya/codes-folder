#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){

    int s=0,e=n-1,mid;

    while(s<=e){
     mid = s + (e-s)/2;

    if(arr[mid]==key){return mid;}
    else if(arr[mid]<key){
        s = mid+1;
    }else{
        e=mid-1;
    }

    }
    return -1;
}

int main(){
    int arr[]={1,34,43,56,67,687};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<binarySearch(arr,n,43);

    return 0;
}