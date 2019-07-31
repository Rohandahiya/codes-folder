#include<bits/stdc++.h>
using namespace std;

int compare(string a,string b){
    string ab = a.append(b);
    string ba = b.append(a);

    return (ab.compare(ba)>0)?1:0;
}

void printlargestnumber(vector<string> arr){
    sort(arr.begin(),arr.end(),compare);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
    int n,num;
    cin>>n;
    int ar[n];
    vector<string> v;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        v.push_back(to_string(ar[i]));
    }
    printlargestnumber(v);
    }
	return 0;
}