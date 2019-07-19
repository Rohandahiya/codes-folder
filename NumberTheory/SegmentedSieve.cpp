#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void sieve(){
    int p[1000000];
    for(int i=0;i<=1000000;i++)p[i]=1;
    for(int i=2;i<=1000000;i+=2){
        p[i]=0;
    }
    for(int i=3;i<=1000000;i+=2){
        if(p[i]){
            for(int j=i*i;j<=1000000;j+=i)
            {
                p[j]=0;
            }
        }
    }

}

int segmented_sieve(long long int a,long long int b){
    sieve();
    bool pp[b-a+1];
    memset(pp,1,sizeof(pp));

    for(int i=2;i*i<=b;i++){
        for(int j=a;j<=b;j++){
            if(p[i]){
                if(j==1)
                    continue;
                if(j%i==0)
                    pp[j-a]=0;
                }
        }
    }

    int res=0;
    for(long long int i=0;i<(b-a+1);i++){
        res+=pp[i];
    }

    return res;
}

int main(){

long long int a,b;
cin>>a>>b;

cout<<segmented_sieve(a,b);

}
