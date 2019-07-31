// https://www.geeksforgeeks.org/maximum-xor-value-of-a-pair-from-a-range/

#include<iostream>
using namespace std;

int max_XOR_msb(int l,int r){
    int maxval= l^r;
    int msb=0;
    while(maxval){
        msb++;
        maxval>>=1;
    }
    return msb;
}

int max_XOR(int l,int r){
     int max_msb = max_XOR_msb(l,r);
     int two_power =1;
     int ans=0;
     while(max_msb--){
        ans += (two_power);
        two_power<<=1;
     }
     return ans;
}

int main(){
    int l,r;
    cin>>l>>r;
    cout<<max_XOR(l,r);
    return 0;
}
