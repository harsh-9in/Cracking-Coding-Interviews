#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

template <typename T>
class graph{
	map<T,list<pair<T,int> > > m;
public:

	void addEdge(T x,T y,int dist,bool dir=false){
		m[x].push_back(make_pair(y,dist));
		if(!dir)
			m[y].push_back(make_pair(x,dist));

	}


	void printadjlist(){
		for(auto i:m){
			cout<<i.first<<"-> ";
			for(auto li:i.second){
				cout<<"( "<<li.first<<" "<<li.second<<" )"<<", ";
			}
			cout<<endl;
		}
	}



	void dijkstra(T src){

		map<T,int> dist;

		for(int i=1;i<=7;i++){
			dist[i]=INT_MAX;
		}

		dist[src]=0;

		set<pair<int,T>> s;
		s.insert(make_pair(dist[src],src));


		while(!s.empty()){
			auto cur=*(s.begin());
			int nodeDist=cur.first;
			T node=cur.second;
			s.erase(cur);

			for(auto nbr: m[node]){
				auto destination=nbr.first;
				if(nodeDist+nbr.second<dist[destination]){
					auto f=s.find(make_pair(dist[destination],destination));
					if(f!=s.end()){
						s.erase(f);
					}
					dist[destination]=nodeDist+nbr.second;
					s.insert(make_pair(dist[destination],destination));

				}
			}

		}

		for(auto i: dist){
			cout<<i.first<<" is located at a dist of   "<<i.second<<endl; 
		}


	}






	


	
};



void solve()
{

	// graph<string> india;
	// india.addEdge("Amritsar","Delhi",1);
	// india.addEdge("Amritsar","jaipur",4);
	// india.addEdge("jaipur","Delhi",2);
	// india.addEdge("jaipur","Mumbai",8);
	// india.addEdge("Bhopal","Agra",2);
	// india.addEdge("Mumbai","Bhopal",3);
	// india.addEdge("Agra","Delhi",1);
	// india.dijkstra("Amritsar");




	graph<int> g;
	g.addEdge(1,2,1,true);
	g.addEdge(2,3,2,true);
	g.addEdge(3,4,2,true);
	g.addEdge(1,4,7,true);
	g.addEdge(4,5,12,true);
	g.addEdge(3,5,1,true);
	g.addEdge(5,6,1,true);
	g.addEdge(3,7,1,true);



	g.dijkstra(1);







}



int32_t main()
{
	io();
	solve();
	return 0;
}