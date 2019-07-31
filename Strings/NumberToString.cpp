#include<bits/stdc++.h>
using namespace std;

int digits(int n){
    int cont=0;
    while(n){
        cont++;
        n/=10;
    }
    return cont;
}

void printNum(int n){
    int pow=1;
    int t=digits(n)-1;
    while(t>=0){
          for(int i=0;i<t;i++)pow*=10;
          int o = n/pow;
          cout<<o<<", ";
          n=n-(o*pow);
          pow=1;
          t--;
    }
}

int main() {
    int n,m;
    stringstream ss,ss2;
    cin>>n;
    int arr[n],brr[m];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ss << arr[i];
    }
    int firstnumber;
    ss >> firstnumber;
    //cout<<firstnumber<<" yeah "<<endl;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>brr[i];
        ss2 << brr[i];
    }
    int secondnumber;
    ss2 >> secondnumber;
    //rcout<<secondnumber;
    int sum = firstnumber + secondnumber;
    printNum(sum);
    cout<<"END"; 
    
    
    return 0;
}