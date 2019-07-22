#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    int D;
    D= (b*b)-(4*a*c);
    float e = sqrt(D);
    float ans1,ans2;
    
    
    if(D>0){
        cout<<"Real and Distinct"<<endl;
        ans1 = (-b + e) / (2*a);
        ans2 = (-b - e) / (2*a);
        if(ans1<ans2){cout<<ans1<<" "<<ans2;}
        else{cout<<ans2<<" "<<ans1;}
    }
    else if(D==0){
        cout<<"Real and Equal"<<endl;
        ans1 = -b/(2*a);
        cout<<ans1<<" "<<ans1;
    }
    else{
        cout<<"Imaginary roots";
    }

}