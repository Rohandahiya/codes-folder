#include<bits/stdc++.h>

using namespace std;

// Finding if the sum of elements in a array is equal to a given number

void pairSum(int A[],int N, int X){

    int i=0;

    int j=N-1;

    while(i<j){

    if(A[i] + A[j]==X){
        cout<<"Elements - "<<A[i]<<" "<<A[j];
        cout<<" Index - "<<i<<" "<<j<<endl;
        i++;
        j--;
        }

     else if(A[i]+A[j]<X){

        i++;
        }

    else{
        j--;
    }
            }

}

int main(){

    int A[] ={10,20,35,50,75,80};
    int N = sizeof(A)/sizeof(int);
    int X = 70;
    pairSum(A,N,X);
}
