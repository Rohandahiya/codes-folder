#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void pythagoreanTriplets(int p,int limit) 
{ 
  
    int a=0,b=0,c=0,flag = 0; 
  
    int m = 2; 
  
    while (c < limit) { 
  
        for (int n = 1; n < m; ++n) { 
  
            a = m * m - n * n; 
            b = 2 * m * n; 
            c = m * m + n * n; 

            if (c > limit) 
                break; 
            
            if(p==a){
                cout<<b<<" "<<c;
                flag=1;
                break;
            }
            else if(p==b){
                cout<<a<<" "<<c;
                flag=1;
                break;
            }
            else if(p==c){ 
                cout<<a<<" "<<b;
                flag=1;
                break;}
            else
            { continue;}

        } 
        if(flag)break;
        else{
            m++; }
    } 
    if(!flag)cout<<"-1";

} 
  

int main(){
    int p;
    cin>>p;
    pythagoreanTriplets(p,1000000000);
    return 0;
}