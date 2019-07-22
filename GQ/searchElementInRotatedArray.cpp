#include<iostream>
using namespace std;

int searchRotatedArray(int arr[],int s,int l,int key){

    if(s>l)return -1;

    int mid = s + (l-s)/2;

    if(arr[mid]==key)return mid;

    if(arr[s]<=arr[mid]){
        if(key<=arr[mid] && key>=arr[s]){
            return searchRotatedArray(arr,s,mid-1,key);
        }
        else{
            return searchRotatedArray(arr,mid+1,l,key);
        }
    }else{
        if(key>=arr[mid] && key<=arr[l]){
            return searchRotatedArray(arr,mid+1,l,key);
        }else{
            return searchRotatedArray(arr,s,mid-1,key);
        }
    }

}


int main(){
    int arr[]={3,4,5,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    cout<<searchRotatedArray(arr,0,n-1,key);

    return 0;
}