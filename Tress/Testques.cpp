#include<bits/stdc++.h>
using namespace std;

string print_All_Elements_At_level_k(Node*root,int k){
	string ans = "";
    if(root==NULL)return;
    if(k==0){
        ans.append(root->da)
        return;
    }
    print_All_Elements_At_level_k(root->left,k-1);
    print_All_Elements_At_level_k(root->right,k-1);

}
}
int main(){

	

	return 0;
}
