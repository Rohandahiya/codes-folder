#include<iostream>
using namespace std;

int main(){
    int sum=0;
    int no;
    while(scanf("%d",&no)!=EOF){
        sum+=no;
        if(sum<0)break;
        else cout<<no<<endl;
    }
return 0;

}