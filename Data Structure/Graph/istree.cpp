#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


class graph{

	list<int> *l;
	int v; 
public:

	graph(int v){
		this->v=v;
		l=new list<int>[v];
	}

	void addEdge(int x,int y){
		l[x].push_back(y);
		l[y].push_back(x);
	}



	bool is_tree(){

		bool visited[v];
		int parent[v];

		queue<int> q;
		for(int i=0;i<v;i++){
			visited[i]=false;
			parent[i]=i;
		}
		int src=0;
		q.push(src);
		visited[src]=true;

		while(!q.empty()){
			int node=q.front();
			q.pop();
			for(auto nbr:l[node]){
				if(visited[nbr]==true && parent[node]!=nbr){
					return false;
				}
				else if(!visited[nbr]){
					visited[nbr]=true;
					parent[nbr]=node;
					q.push(nbr);
				}

			}
		}

		return true;

	}



	
	
};







void solve()
{

	graph g(6);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(3,4);
	g.addEdge(1,4);

	if(g.is_tree()){
		cout<<"tree";
	}
	else
		cout<<"graph";


}



int32_t main()
{
	io();
	solve();
	return 0;
}