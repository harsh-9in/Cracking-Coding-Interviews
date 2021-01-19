#include<bits/stdc++.h>
using namespace std;


void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}



	

void solve()
{

	int n; cin>>n; 
	int a[n];
	for(int i=0;i<n;i++)
			cin>>a[i];

	int start = 0, end=0,s=0; 


	int curr_sum=0;
	int max_sum=0;

	for(int i=0;i<n;i++){
		curr_sum+=a[i];

		if(curr_sum<0){
			curr_sum=0;
			s=i+1;
		}

		if(curr_sum > max_sum){
			max_sum=curr_sum;
			start=s;
			end =i;
		}
			
	}

	cout<<max_sum<<endl;

	cout<<"start  "<<start<<endl;
	cout<<"End  "<<end<<endl;




}



int32_t main()
{
	io();
	solve();
	return 0;
}
