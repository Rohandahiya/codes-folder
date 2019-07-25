#include<iostream>
using namespace std;

bool isValid(int books[],int n,int m,int ans){
    int students = 1;
    int current_pages = 0;

    for(int i=0;i<n;i++){
        if(books[i]>ans)return false;
        if(current_pages+books[i]>ans){
            students++;
            if(students>m)return false;
        }else{
            current_pages+=books[i];
        }
    }

    return true;
}

int minimumPages(int books[],int n,int m){
    if(n<m)return -1;
    int totalPages =0,mid;
    int s = books[n-1];
    int ans = s;
    for(int i=0;i<n;i++){
        totalPages += books[i];
    }
    int e = totalPages;

    while(s<=e){
        mid = s +(e-s)/2;

        if(isValid(books,n,m,mid)){
            ans = mid;
            e = mid -1;
        }
        else s=mid+1;
    }

return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int books[n];
        for(int i=0;i<n;i++){
            cin>>books[i];
        }
        cout<<minimumPages(books,n,m);

    }

    return 0;
}