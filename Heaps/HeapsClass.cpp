#include<iostream>
#include<vector>

using namespace std;

class Heap{
    vector<int> v;
    bool minType;

    bool compare(int a,int b){
        if(minType)return a<b;
        else return a>b;
    }

    void heapify(int i){
        int left = 2*i;
        int right = left + 1;
        int minIndex = i;

        if(left<v.size() && compare(v[left],v[i]) ){
            minIndex = left;
        }
        if(right<v.size() && compare(v[left],v[minIndex]) ){
            minIndex = right;
        }

        if(minIndex!=i)
        {
        swap(v[minIndex],v[i]);
        heapify(minIndex);
        }

    }

    public:
        Heap(bool type = true){
            v.push_back(-1);
            minType = type;
        }
    
    void push(int data){
        v.push_back(data);
        int index = v.size()-1;//-1 already inserted
        int parent = index/2;

        if(index>1 && compare(v[index],v[parent]) ){
            swap(v[index],v[parent]);
            parent/=2;
            index = parent;
        }
    }

    bool empty(){
        return v.size()==1;
    }

    int top(){
        return v[1];
    }

    void pop(){
        int last = v.size() - 1;
        swap(v[1],v[last]);
     v.pop_back();
        heapify(1);
     }




};

int main(){
    Heap H;
    H.push(2);
    H.push(49);
    H.push(332);
    H.push(40);
    //cout<<H.top()<<endl; 
   // cout<<H.empty();
    while(!H.empty()){
        cout<<H.top()<<endl;
        H.pop();
    }

    return 0;
}