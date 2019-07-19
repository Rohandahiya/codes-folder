#include<iostream>
#include<set>
#include<cstring>
using namespace std;

void permute(string p,int i,set<string> &s){
	//base case
	if(p[i]=='\0'){
		//cout<<input<<endl;
		string temp = p;
		s.insert(temp);
		return;
	}

	//rec case
	for(int j=i;p[j]!='\0';j++){
		swap(p[i],p[j]);
		permute(p,i+1,s);
		swap(p[i],p[j]);
	}

}

int main(){

	set<string> s;
	string p;
	cin>>p;
	permute(p,0,s);

	for(string t:s){
		cout<<t<<" ";
	}
	return 0;
}
