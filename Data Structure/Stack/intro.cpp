#include<bits/stdc++.h>
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mod             1000000007
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define f(i,s,n)		for(int i=s;i<n;i++)

void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}




void solve()
{

	stack<int> s;

// for insertinf elements
	s.push(1);
	s.push(2);
	s.push(3);

	//For first
	cout<<s.size()<<endl;

	//removing an element
	s.pop();
	cout<<s.size()<<endl;

	//for taking multiple input from user

	for(int i=0;i<5;i++)
	{
		int k;
		cin>>k;
		s.push(k);
	}
	cout<<s.size()<<endl;


	//for showing an element


	while(s.empty()==false)
	{
		cout<<s.top()<<endl;
		s.pop();
	}






}


int32_t main()
{
	io();
	solve();
	return 0;
}
