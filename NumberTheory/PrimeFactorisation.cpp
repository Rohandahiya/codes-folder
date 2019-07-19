#include<bits/stdc++.h>

using namespace std;

vector<int> sieveoferasthones(int n){
  int arr[n+1];

  for(int i=0;i<=n;i++)arr[i]=1;

  for(int i=0;i<=n;i+=2){
    arr[i]=0;
    }

    for(int i=3;i<=n;i+=2)
    {
        if(arr[i]){
        for(int j=i*i;j<=n;j+=2*i){
            arr[j]=0;        }
            }
    }

    arr[0]=0;
    arr[1]=0;

    vector<int> primes;
    primes.push_back(2);
    for(int i=3;i<=n;i+=2)
    {
        if(arr[i])
            primes.push_back(i);
    }

    return primes;


}

vector<int> factorise(int number,vector<int> &primes){

    vector<int> factors;
    factors.clear();

    int i=0;
    int p=primes[0];

    while(p*p<=number){

    if(number%p==0){
        factors.push_back(p);

        while(number%p==0)
            number = number/p;

    }

    i++;
    p = primes[i];
    }

    if(number!=1)
    {
        factors.push_back(1);
        factors.push_back(number);
    }

    return factors;

}

int main()
{
    int n = 100;



    vector<int> factors = factorise(18,primes);

    for(auto no:factors){
        cout<<no<<" "<<endl;
    }


}





