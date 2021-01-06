#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


class Humman{
public:


	int age;
	string name;


	// Default Constructor
	Humman(){
		cout<<"constructor called	";
	}

	// parameterised constructor 
	Humman(int age){
		this->age =age;
	}


	void out(){
		cout<<name<<"   "<<age<<endl;
	}


	void capital(){
		transform(name.begin(), name.end(),name.begin(), ::toupper);

	}




};

	

void solve()
{

	Humman h(5);
	h.name = "harsh";
	h.out();

	
	Humman *p= new Humman(10);
	(*p).name="hello";
	(*p).out();



	p->age=20;
	p->name="changed";
	p->out();

	delete p;



}



int32_t main()
{
	io();
	solve();
	return 0;
}