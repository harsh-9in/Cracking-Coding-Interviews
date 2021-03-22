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


int match(char n,char m)
{
	return((n=='('&& m==')') || (n=='{'&& m=='}') ||  (n=='['&& m==']'));
}


int paranthesis(string str)
{
	stack<int> s;

	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='(' || str[i]=='{' || str[i]=='[')
		{
			s.push(str[i]);
		}
		else
		{
			if(s.empty()==true)
				return false;
			else if(match(s.top(),str[i])==false)
				return false;

			else
				s.pop();
		}
	}
	if(s.empty()==true)
		return true;
	else return false;
}





void solve()
{

	string s;
	w(t)
	{
		cin>>s;

		if(paranthesis(s))
			cout<<"balanced"<<endl;
		else
			cout<<"not balanced"<<endl;
	}


}


int32_t main()
{
	io();
	solve();
	return 0;
}
