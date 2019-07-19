#include<iostream>
using namespace std;

int kadane(int *input,int n)
{
    int current_sum=0;
    int best_sum=0;
    for(int i=0;i<n;i++)
    {
            current_sum+=input[i];
            if(best_sum < current_sum)
            {
                best_sum=current_sum;
            }
            if(current_sum<0)
            {
            current_sum=0;
        }
    }
    return best_sum;
}

int main()
{
int n;
cin>>n;
int *input=new int[n];
for(int i=0;i<n;i++)
{
cin>>input[i];
}
cout<<kadane(input,n);
}
