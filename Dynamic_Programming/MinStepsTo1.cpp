//Perform n-1,n/2,n/3 so as to convert n to 1 using minimum steps
#include<bits/stdc++.h>

using namespace std;

int minStepsTD(int n,int *dp){
	//Base Case
	if(n==1){
		return 0;
	}
	//Rec Case
	if(dp[n]!=0){
		return dp[n];
	}

	int op1,op2,op3;
	op1 = op2 = op3 = INT_MAX;
	op1 = minStepsTD(n-1,dp);

	if(n%2==0){
		op2 = minStepsTD(n/2,dp);
	}
	if(n%3==0){
		op3 = minStepsTD(n/3,dp);
	}
	return dp[n] = min(min(op1,op2),op3)+1;
}

int minSteps1BU(int n){
	//Bottom Up Approach
	int dp[1000]={0};

	dp[1] = 0;
	for(int i=2;i<=n;i++){
		int op1,op2,op3;
		op1 = op2 = op3 = INT_MAX;
		op1 = dp[i-1];
		if(i%2==0){
			op2 = dp[i/2];
		}
		if(i%3==0){
			op3 = dp[i/3];
		}
		dp[i] = min(op1,min(op2,op3))+1;
	}
	return dp[n];
}

int main(){
    int dp[100] = {0};
    cout<<minStepsTD(10,dp);
    return 0;
}