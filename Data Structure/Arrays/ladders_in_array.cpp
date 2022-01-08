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


void solve()
{
	int n;

	w(t)
	{
		vector <int > v;
		cin>>n;
		int a[n];
		f(i,0,n)
		{
			cin>>a[i];
		}
		v.pb(a[n-1]);
		int p;
		int top=0;
		for(int i=n-2;i>=0;i--)
		{
			int k=a[i];
			if(v[top]<=k)
			{
				v.pb(k);
				top++;
			}

		}
		reverse(v.begin(),v.end());
		for(auto i:v)
		{
			cout<<i<<" ";
		}


		cout<<endl;
	}



}


int32_t main()
{

	solve();
	return 0;
}
