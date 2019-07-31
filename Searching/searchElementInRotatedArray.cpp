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
    int arr[]={ 180, 181, 182, 183, 184, 187, 188, 189, 191, 192, 193, 194, 195, 196, 201, 202, 203, 204, 3, 4, 5, 6, 7, 8, 9, 10, 14, 16, 17, 18, 19, 23, 26, 27, 28, 29, 32, 33, 36, 37, 38, 39, 41, 42, 43, 45, 48, 51, 52, 53, 54, 56, 62, 63, 64, 67, 69, 72, 73, 75, 77, 78, 79, 83, 85, 87, 90, 91, 92, 93, 96, 98, 99, 101, 102, 104, 105, 106, 107, 108, 109, 111, 113, 115, 116, 118, 119, 120, 122, 123, 124, 126, 127, 129, 130, 135, 137, 138, 139, 143, 144, 145, 147, 149, 152, 155, 156, 160, 162, 163, 164, 166, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177 };
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    cout<<searchRotatedArray(arr,0,n-1,key);

    return 0;
}