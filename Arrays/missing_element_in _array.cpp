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
		cin>>n;
		int s=n-1;
		int a;
		int p=0;
		f(i,0,s)
		{
			cin>>a;
			p+=a;
		}
		int f=n*(n+1);
		f=f/2;
		cout<<f-p<<endl;





	}


}

int32_t main()
{

	solve();
	return 0;
}
