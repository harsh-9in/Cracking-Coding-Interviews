#include<iostream>
#include<vector>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


class Stack{
private:
	vector<int> v;
public:
	void push(int n){
		v.push_back(n);
	}
	bool empty(){
		if(v.size()==0)
			return true;
		return false;
	}

	void pop(){
		if(!empty())
			v.pop_back();
	}
	int top(){
		return v[v.size()-1];
	}

};




void solve()
{

	Stack s;

	for(int i=1;i<=5;i++){
		s.push(i*i);
	}

	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}


	// cout<<s.top();






}



int32_t main()
{
	io();
	solve();
	return 0;
}