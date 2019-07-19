#include<bits/stdc++.h>

using namespace std;

int pairSameInteger(int A[],int B[],int m,int n){

    int i=0,j=0;
    while(i<m && j<n){

        if(A[i]==B[j]){
            cout<<A[i]<<" ";
            i++;j++;
        }
        else if(A[i]<B[j]){
            i++;
        }else{ j++; }

}
}

int main()
{
  int A[] = {1, 2, 4, 5, 6};
  int B[] = {2, 3, 5, 7};

  int m = sizeof(A)/sizeof(A[0]);
  int n = sizeof(B)/sizeof(B[0]);

  pairSameInteger(A, B, m, n);

  return 0;
}
