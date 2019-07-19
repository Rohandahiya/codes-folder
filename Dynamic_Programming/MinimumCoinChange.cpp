#include<iostream>
#include<climits>
using namespace std;

int topDownCoinChange(int N,int coins[],int m,int dp[]){
    if(N==0){
        return 0;
    }
    if(dp[N]!=0){
        return dp[N];
    }
    int mini = INT_MAX;
    for(int i=0;i<m;i++){
        if(N-coins[i]>=0){
            mini = min(mini,topDownCoinChange(N-coins[i],coins,m,dp)+1);
        }
    }
    return dp[N] = mini;
}

int bottomUPCoinChange(int n,int coins[],int m){
    int dp[100]={0};
    dp[0]=0;

    for(int i=1;i<=n;i++){
        dp[i] = INT_MAX;
        for(int j=0;j<m;j++){
            if(i-coins[j]>=0){
                dp[i] = min(dp[i],dp[i-coins[j]]+1);
            }
        }
    }

    return dp[n];
}
int main(){
    int coins[] = {1,2,3};
    int dp[100] = {0};
    cout<<topDownCoinChange(4,coins,3,dp)<<endl;
    cout<<bottomUPCoinChange(4,coins,3);
    return 0;
}