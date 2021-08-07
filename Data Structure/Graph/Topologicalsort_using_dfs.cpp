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
	map<int,list<int>> l;
public:
	void addEdge(int x,int y){
		l[x].push_back(y);
		// l[y].push_back(y);
	}

	void dfs_helper(int node,map<int,bool> &visited,list<int> &order){
		visited[node]=true;

		for(auto nbr: l[node]){
			if(visited[nbr]!=true){
				dfs_helper(nbr,visited,order);
			}
		}

		order.push_front(node);

	}

	void dfs(int src){
		map<int,bool> visited;
		list<int> order;

		for(auto p: l){
			int src=p.first;
			if(visited[src]!=true)
				dfs_helper(src,visited,order);
		}
		
		for(auto i:order){
			cout<<i<<endl;
		}





	}



	
};


void solve()
{

	graph g;

	g.addEdge(1,2);
	g.addEdge(1,3);
	g.addEdge(1,4);
	g.addEdge(2,3);
	g.addEdge(3,5);
	g.addEdge(4,5);	
	g.addEdge(5,7);
	g.addEdge(6,7);		


	g.dfs(0);


}



int32_t main()
{
	io();
	solve();
	return 0;
}
