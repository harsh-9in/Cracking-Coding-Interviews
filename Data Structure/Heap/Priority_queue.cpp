#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


class Car{
	int id,x,y;
public:
	Car(int id,int x,int y){
		this->id=id;
		this->x=x;
		this->y=y;
	}

	int dist(){
		return x*x+y*y;
	}

	void print(){
		cout<<"ID: "<<id<<"  ";
		cout<<"Location: "<<x<<" , "<<y<<endl;
	}



};



// Functor - Functional Object 
// Custom compare

class CarCompare
{
public:
	// Method to overload - () Operator
	bool operator()(Car a,Car b){
		return a.dist()>b.dist();

	}

};



void solve()
{

	priority_queue<Car,vector<Car>,CarCompare> pq;

	int x[10]={5,6,17,18,9,11,0,3};
	int y[10]={1,-2,8,9,10,91,1,2};

	for(int i=0;i<8;i++){
		Car c(i,x[i],y[i]);
		pq.push(c);
	}


	while(!pq.empty()){
		Car p=pq.top();
		p.print();
		pq.pop();
	}




}



int main()
{
	io();
	solve();
	return 0;
}