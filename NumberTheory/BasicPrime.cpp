#include<bits/stdc++.h>

using namespace std;

bool isprime(int no){

    if(no==1){
        return false;
        }

    for(int i=2;i*i<=no;i++){

        if(no%i==0){
            return false;
    }
    }

    return true;

    }


int main(){
    int n;
    cin>>n;
    if(isprime(n)){
        cout<<"Yes "<<n<<" is prime";
        }else{
        cout<<"No "<<n<<" is not prime";
        }
}
