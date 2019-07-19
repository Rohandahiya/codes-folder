#include<bits/stdc++.h>

using namespace std;

void sieveoferasthones(int n){
    int arr[n+1];

  for(int i=0;i<=n;i++){
    arr[i]=1;
    }

  for(int i=0;i<=n;i+=2){
    arr[i]=0;
    }

    for(int i=3;i<=n;i+=2)
    {
        if(arr[i]){
        for(int j=i*i;j<=n;j+=2*i){
            arr[j]=0;        }
            }
    }

    arr[0]=0;
    arr[1]=0;

    if(arr[n]==1){
        cout<<"The number "<<n<<" is a Prime Number";
    }else{
        cout<<"The number "<<n<<" is not a Prime Number";
    }
}

int main(){
    int no;
    cin>>no;
    sieveoferasthones(no);

    }
