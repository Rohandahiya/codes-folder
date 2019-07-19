#include<iostream>
using namespace std;

int increasingOrder(int n){
    if(n==0)return 0;
    increasingOrder(n-1);
    cout<<n;
}

int decreasingOrder(int n){
    if(n==0)return 0;
    cout<<n;
    decreasingOrder(n-1);
}

int main(){
    increasingOrder(5);
    cout<<endl;
    decreasingOrder(5);
    return 0;
}