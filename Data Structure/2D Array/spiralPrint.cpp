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



void spiralPrint(int a[][100], int n,int m){

	int sr=0,sc=0,er=n-1,ec=m-1;

	while(sr<=er and sc<=ec){

		//First row
		for(int i=sc;i<=ec;i++){
			cout<<a[sr][i]<<" ";
		}
		sr++;

		// Last Col
		for(int i=sr;i<=er;i++){
			cout<<a[i][ec]<<" ";
		}
		ec--;

		//Bottom row
		if(er>sr){
			for(int i=ec;i>=sc;i--){
				cout<<a[er][i]<<" ";
			}
			er--;

		}

		//First col
		if(ec>sc){
			for(int i=er;i>=sr;i--){
				cout<<a[i][sc]<<" ";
			}
			sc++;

		} 




	}


}





void solve()
{
	int m,n;
	cin>>m>>n;

	int a[100][100];

	int p=1;

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			a[i][j]=p;
			p++;
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}

	spiralPrint(a,m,n);


}



int32_t main()
{
	io();
	solve();
	return 0;
}