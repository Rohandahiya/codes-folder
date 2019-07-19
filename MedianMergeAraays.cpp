#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  int a[n];
  int b[n];
  int l=2*n;
  int c[l];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    cin>>b[i];
  }
  for(int i=0;i<n;i++){
    c[i]=a[i];
  }
  for(int i=n;i<l;i++){
    c[i]=b[i];
  }
  sort(c,c+l);
  int p=floor(l-1/2);
  cout<<c[p];

	return 0;
}
