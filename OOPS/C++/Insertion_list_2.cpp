#include<bits/stdc++.h>
using namespace std;
#define int long long

void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


class Student{
public:
	int const rollno;
	int &x;
	int age;



	Student(int r,int age): rollno(r), age(age),x(this->age){

	};

	void print(){
		cout<<rollno<<endl;
		cout<<age<<endl<<x<<endl;

	}



};


void solve()
{

	Student s1(10,20);
	s1.print();



}



int32_t main()
{
	io();
	solve();
	return 0;
} 
