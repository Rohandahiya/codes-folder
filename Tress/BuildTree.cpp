#include<iostream>
#include<queue>

using namespace std;

class Node{
    public:
        int data;
        Node * left;
        Node * right;
    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

Node * buildTree(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    Node * root = new Node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

Node * newNode (int d){
    Node * root = new Node(d);
    root->left=root->right=NULL;
    return root;
}

void printTree(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printTree(root->left);
    
    printTree(root->right);
}

void insert( Node* temp, int key) 
{ 
    queue< Node*> q; 
    q.push(temp); 
  
    // Do level order traversal until we find 
    // an empty place.  
    while (!q.empty()) { 
         Node* temp = q.front(); 
        q.pop(); 
  
        if (!temp->left) { 
            temp->left = newNode(key); 
            break; 
        } else
            q.push(temp->left); 
  
        if (!temp->right) { 
            temp->right = newNode(key); 
            break; 
        } else
            q.push(temp->right); 
    } 
} 

void print_All_Elements_At_level_k(Node*root,int k){
    if(root==NULL)return;
    if(k==0){
        cout<<root->data<<" ";
        return;
    }
    print_All_Elements_At_level_k(root->left,k-1);
    print_All_Elements_At_level_k(root->right,k-1);

}

int hieght(Node*root){
    if(root==NULL)return -1;
    int h1 = hieght(root->left);
    int h2 = hieght(root->right);
    return 1+max(h1,h2);
}

int replacesum(Node*root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL)
    {
        return root->data;
    }
    int left_sum = replacesum(root->left);
    int right_sum = replacesum(root->right);
    int temp = root->data;
    root->data = left_sum + right_sum;
    return root->data + temp;
}

void LevelorderTraversal(Node*root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node * temp = q.front();

        if(temp==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){  // Not to add null after the last level
                q.push(NULL);
            }
        }else{
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }

        }
    }
}

Node* levelOrderBuild(){

	int d;
	cin>>d;
	Node* root = new Node(d);
	queue<Node*> q;
	q.push(root);

	while(!q.empty()){
		Node*f = q.front();
		q.pop();

		int c1,c2;
		cin>>c1>>c2;
		if(c1!=-1){
			f->left = new Node(c1);
			q.push(f->left);
		}
		if(c2!=-1){
			f->right = new Node(c2);
			q.push(f->right);
		}
	}

	return root;
}

int main(){
    Node * root = buildTree();
   //Node * root =  levelOrderBuild();
    //cout<<hieght(root);
    //cout<<replacesum(root);
    //insert(root,7);
    //print_All_Elements_At_level_k(root,2);
    //printTree(root);
    LevelorderTraversal(root);
    return 0;
}