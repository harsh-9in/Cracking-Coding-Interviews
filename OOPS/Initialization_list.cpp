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
	
	Student(int r): rollno(r){

	};

	void print(){
		cout<<rollno<<endl;
	}



};


void solve()
{

	Student s1(10);
	s1.print();



}



int32_t main()
{
	io();
	solve();
	return 0;
}
