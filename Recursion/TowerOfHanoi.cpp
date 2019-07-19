#include<iostream>
using namespace std;

int no_of_steps(int n){
    if(n==1){
        return 1;
    }
    return 2*no_of_steps(n-1)+ 1;
}

void TowerOfHanoi(int n,char source,char helper,char dest){
    if(n==0)return;
    TowerOfHanoi(n-1,source,dest,helper);
    cout<<"Move "<<n<<" disk from "<<source<<" to "<<dest<<endl;
    TowerOfHanoi(n-1,helper,source,dest);
}

int main(){
    TowerOfHanoi(3,'A','B','C');
    cout<<no_of_steps(3);
    return 0;
}