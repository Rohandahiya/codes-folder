#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int arr[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<m;i++){
        if(i&1){
            for(int j=n-1;j>=0;j--)cout<<arr[j][i]<<", ";
        }else{
            for(int j=0;j<n;j++)cout<<arr[j][i]<<", ";
        }
    }

    cout<<"END";

    return 0;
}