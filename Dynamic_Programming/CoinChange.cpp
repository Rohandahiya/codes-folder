#include<iostream>
using namespace std;

int topDown(int n,int coins[],int m){
    if(n==0)return 1;
    if(n<0)return 0;
    if(m<=0 && n>0)return 0;

    return topDown(n,coins,m-1) + topDown(n-coins[m-1],coins,m);
}

int bottomUp(int n,int coins[],int m){
    int table[n+1][m];
    int x,y;
    for(int i=0;i<m;i++){
        table[0][i]==1;
    }

    for(int i=1;i<n+1;i++){
        for(int j=0;i<m;j++){
            //including
            if(i-coins[j]>=0){
               x = table[i-coins[j]][j];
            }else{
                x=0;
            }
            if(i-coins[j]>=0){
               x = table[i-coins[j]][j];
            }else{
                x=0;
            }
        }
        
    }


}
int main(){
    int coins[] = {1,2,3};
    cout<<topDown(4,coins,3);
    return 0;
}