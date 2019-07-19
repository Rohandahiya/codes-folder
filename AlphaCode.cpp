#include<iostream>
using namespace std;

int num_codes(int *n,int siz,int *arr)
{
    if(siz==0 || siz==1)
    {
        return 1;
    }
    if(arr[siz]>0)
    {
        return arr[siz];
    }
    int output=num_codes(n,siz-1,arr);
    if(n[siz-2]*10+n[siz-1]<=26)
    {
    output+=num_codes(n,siz-2,arr);
    }
    arr[siz]==output;
    return output;
}

int num_of_digits(long long num)
{
    int t=0;
    while(num!=0)
    {
    num/=10;
    ++t;
    }
    return t;
}

int main()
{
    int *number=new int[10];
    for(int i=0;i<10;i++)
    {
        cin>>number[i];
    }
    int *arr = new int[10];
    cout<<num_codes(number,10,arr);
}
