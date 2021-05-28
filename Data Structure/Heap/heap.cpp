#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}



class heap
{
	vector<int> v;
	bool minHeap;

	bool compare(int a, int b){
		if(minHeap)
			return a<b;
		return a>b;
	}

	void heapify(int i){

		int left=2*i;
		int right=2*i+1;

		int minIdx=i;

		if(left<v.size() && compare(v[left],v[minIdx]))
			minIdx=left;
		if(right<v.size() && compare(v[right],v[minIdx]))
			minIdx=right;

		if(minIdx!=i){
			swap(v[i],v[minIdx]);
			heapify(minIdx);
		}


	}

 


public:

	heap(bool type=true){
		minHeap=type;
		v.push_back(-1);
	}

	void push(int data){

		v.push_back(data);

		int index=v.size()-1;
		int parent= index/2;

		while(index>1 && compare(v[index],v[parent])){
			swap(v[index],v[parent]);
			index=parent;
			parent=index/2;
		}

	}

	bool empty(){
		return v.size()==1;
	}

	int top(){
		return v[1];
	}


	void pop(){
		int last=v.size()-1;
		swap(v[1],v[last]);
		v.pop_back();

		heapify(1);



	}





};




void solve()
{

	
	heap h;
	h.push(2);
	h.push(20);
	h.push(5);
	h.push(3);
	h.push(27);

	// cout<<h.top();


	while(!h.empty()){
		cout<<h.top()<<endl;
		h.pop();
	}





}



int main()
{
	io();
	solve();
	return 0;
}