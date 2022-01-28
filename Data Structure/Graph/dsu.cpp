#include<bits/stdc++.h>
using namespace std;
#define int             long long
void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


list<pair<int,int>> gr;
int parent[100000];
int rk[10000];

int find(int n){
	if(parent[n]==-1)
		return n;
	return find(parent[n]);
 
}


void union_set(int a,int b){

	int s1=find(a);
	int s2=find(b);

	if(s1!=s2)
		parent[s2]=s1;

}

int opt_find(int n){
	if(parent[n]==-1)
		return n;
	return parent[n]=find(parent[n]);
}

void opt_union_set(int a,int b){

	int s1=opt_find(a);
	int s2=opt_find(b);

	if(s1!=s2){
		if(rk[s1]>rk[2]){
			rk[s1]+=rk[2];
			parent[s2]=s1;
		}else{
			rk[s2]+=rk[s1];
			parent[s1]=s2;
		}
	}

}


bool contain_cycle(){
	for(auto i: gr){
		int a=i.first;
		int b=i.second;

		int s1=opt_find(a);
		int s2=opt_find(b);

		if(s1!=s2){
			opt_union_set(s1,s2);
		}else{
			return true;
		}

	}
	return false;
}



void solve(){
	memset(parent,-1,sizeof(parent));
	for(int i=0;i<10000;i++) rk[i]=1;
	int n; cin>>n;
	int p=n;
	while(p--){
		int a,b; cin>>a>>b;
		gr.push_back({a,b});
	}

	cout<<contain_cycle();

	

}


int32_t main()
{
	io();
	solve();
	return 0;
}
