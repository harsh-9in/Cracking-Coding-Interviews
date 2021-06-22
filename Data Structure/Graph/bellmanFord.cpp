#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}



vector<int> bellmanFord(int v,int src,vector<vector<int>> edges){


	vector<int> dist(v+1,INT_MAX);
	dist[src]=0;

	for(int i=0;i<v-1;i++){

		for(auto edge: edges){
			int u=edge[0];
			int v=edge[1];
			int wt=edge[2];

			if(dist[v]>dist[u]+wt && dist[u]!=INT_MAX)
				dist[v]=dist[u]+wt;
		}

	}


	for(auto edge: edges){
			int u=edge[0];
			int v=edge[1];
			int wt=edge[2];

			if(dist[v]>dist[u]+wt && dist[u]!=INT_MAX){
				cout<<"Negative Weight cycle found";
				exit(0);
			}

		}

		return dist;


}









void solve()
{

	int v,e;
	cin>>v>>e;

	vector<vector<int>> edges; // [ [u,v,w] , [u,v,w] ,[u,v,w] ,.....]

	for(int i=0;i<e;i++){
		int u,v,wt;
		cin>>u>>v>>wt;
		edges.push_back({u,v,wt});
	}



	vector<int> dist=bellmanFord(v,1,edges);

	for(int i=1;i<dist.size();i++){

		cout<<"Node "<<i << " is distance "<<dist[i]<<endl;

	}









}



int main()
{
	io();
	solve();
	return 0;
}