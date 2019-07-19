#include<iostream>
using namespace std;

int steptoNusingKsteps(int n,int k){
    if(n==0){
        return 1;
    }
    if(n<0)return 0;
    int ans=0;
    for(int i=1;i<=k;i++){
        ans+=steptoNusingKsteps(n-i,k);
    }
    return ans;
}

int main (){
    cout<<steptoNusingKsteps(3,3);
   return 0; 
}