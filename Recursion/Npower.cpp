#include<iostream>
using namespace std;

int powerN(int a,int n){
    if(n==0)return 1;
    int subprob = powerN(a,n/2);
    subprob = subprob*subprob;
    if(n&1){
        return  a*subprob;
    }
    return subprob;
}
int main()
{
    cout<<powerN(3,4);
    return 0;

}