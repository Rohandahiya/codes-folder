#include<iostream>
using namespace std;

float squareroot(int n,int precision){

    int s=0,l=n,mid,sq;
    float ans=0.0;

    while(s<=l){
        mid = s + (l-s)/2;
        sq = mid*mid;
        if(sq>n){
            l=mid-1;
        }
        else if(sq<n){
            ans = mid;
            s = mid +1;
        }else return mid;break;

    }

    float inc=0.1;
    for(int times=1;times<=precision;times++){
        while(ans*ans<=n){
            ans += inc;
        }
        ans = ans - inc;
        inc/=10;
    }

    return ans;
}

int main(){
    cout<<squareroot(10,4);
    return 0;
}