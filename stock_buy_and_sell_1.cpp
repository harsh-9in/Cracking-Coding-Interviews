#include <bits/stdc++.h>
using namespace std;

int maxsum(int a[], int start ,int end)
{
	if(start>=end)
		return 0;

	int profit=0;

	for(int i=start;i<end;i++)
	{
		for(int j=i+1;j<=end;j++)
		{
			if(a[j]>a[i])
			{
				int curr_profit=a[j]-a[i]+maxsum(a,start,i-1)+maxsum(a,j+1,end);
				profit=max(profit,curr_profit);

			}
		}

	}
	return profit;

}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	cout<<maxsum(a,0,n-1);
	return 0;
}
