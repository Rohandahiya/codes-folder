#include<bits/stdc++.h>
using namespace std;

class Car{
    public:
        int x;
        int y;
        int id;

        Car(){}

        Car(int x,int y,int id){
            this->x = x;
            this->y = y;
            this->id = id;
        }

        int distance(){
            return x*x + y*y;
        }

        void print(){
            cout<<id<<"-> "<<"("<<x<<","<<y<<")"<<endl;
        }

        bool operator()(Car x,Car y){
            return x.distance() > y.distance();
        }

};

int main(){

    priority_queue <Car,vector<Car>,Car > pq;
    

    int x[5] = {1,43,3,5,65};
    int y[5] = {0,-43,5,45,5};

    for(int i=0;i<5;i++){
        Car c(x[i],y[i],i);
        pq.push(c);
    }

    while(!pq.empty()){
        Car p = pq.top();
        p.print();
        pq.pop();
    }

    return 0;
}