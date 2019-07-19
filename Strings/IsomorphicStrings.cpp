#include<bits/stdc++.h>
#define MAX_CHARS 256
using namespace std;

bool isomorphic(string a,string b){
    if(a.length()!=b.length())return false;


unordered_map<char,char> m;
unordered_set<char>s;

for(int i=0;i<a.length();i++){
    char x = a[i];
    char y= b[i];

    if(m.find(x)!=m.end()){
        if(m[x]!=y)return false;
    }
    else{
        if(s.find(y)!=s.end()){
            return false;
        }

        m[x] = y;
        s.insert(y);
    }
}
return true;
}

bool isomorphic_O_n(string a,string b){
    if(a.length()!=b.length())return false;

    int input[MAX_CHARS];
    bool marked[MAX_CHARS] ={false};
    memset(input,-1,sizeof(input));

    for(int i=0;i<a.length();i++){
        if(input[a[i]]==-1){
            //Check if it is mapped to already mapped value or not
            if(marked[b[i]]==true)return false;
            marked[b[i]]=true;
            input[a[i]]=b[i];
        }else{
            if(input[a[i]]!=b[i])return false;
        }
    }
    return true;
}


int main(){
    cout<<isomorphic_O_n("xyz","abc");
    return 0;

}