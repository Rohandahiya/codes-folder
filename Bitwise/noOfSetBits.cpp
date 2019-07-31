#include<iostream>
using namespace std;

int numberOfSetBits(int n){
    int cnt=0;
    while(n){
        if(n&1)cnt++;
        n>>=1;
    }
    return cnt;
}

int main(){
    int t;
    cin>>t;
    int num;
    while(t--){
        cin>>num;
        //cout<<numberOfSetBits(num)<<endl;
        cout<<__builtin_popcount(num)<<endl;
    }
	return 0;
}