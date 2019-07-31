#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x_or=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        x_or^=arr[i];
    }
    int temp = x_or;
    int digit=0;
    while((temp&1==0)){
        digit++;
        temp>>1;
    }
    int mask =(1<<digit);
    int first_num = 0;
    for(int i=0;i<n;i++){
        if((arr[i]&1)>0)first_num^=arr[i];
    }
    int second_number = first_num;
    for(int i=0;i<n;i++){
        second_number ^= arr[i];
    }
    if(first_num<second_number)cout<<first_num<<" "<<second_number;
    else cout<<second_number<<" "<<first_num;


    return 0;
}