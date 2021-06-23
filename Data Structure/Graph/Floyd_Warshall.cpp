#include<bits/stdc++.h>
using namespace std;
#define INF 1000000

void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}



vector<vector<int>> floydWarshall(vector<vector<int>> graph){

	vector<vector<int>> dist(graph);
	int v=graph.size();
	for(int k=0;k<v;k++){
		for(int i=0;i<v;i++){
			for(int j=0;j<v;j++){

				if(dist[i][j]>dist[i][k]+dist[k][j]){
					dist[i][j]=dist[i][k]+dist[k][j];
				}
			}
		}
	}

	return dist;


}






void solve()
{

	vector<vector<int>> graph={
		{0,INF,-2,INF},
		{4,0,3,INF},
		{INF,INF,0,2},
		{INF,-1,INF,0}
	};


	vector<vector<int>> dist=floydWarshall(graph);

	for(int i=0;i<dist.size();i++){
		for(int j=0;j<dist.size();j++){
			cout<<dist[i][j]<<"  ";
		}

		cout<<endl;
	}




}



int main()
{
	io();
	solve();
	return 0;
}