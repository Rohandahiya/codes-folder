#include<bits/stdc++.h>
#include<iostream>
#define ll long long

using namespace std;

int main(){
    ll num1,num2;
    char ch;
    do{
        cin>>ch;
        if(ch=='+'){
            cin>>num1>>num2;
            cout<<num1+num2;
        }
        else if(ch=='-'){
            cin>>num1>>num2;
            cout<<num1-num2;
        }
        else if(ch=='*'){
            cin>>num1>>num2;
            cout<<num1*num2;
        }
        else if(ch=='/'){
            cin>>num1>>num2;
            cout<<num1/num2;
        }
        else if(ch=='%'){
            cin>>num1>>num2;
            cout<<num1%num2;
        }else
        {
            cout<<"Invalid operation. Try again.";
        }
    }
    while(ch!='x' || ch!='X');
    return 0;
}
