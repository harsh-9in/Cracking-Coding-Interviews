#include<bits/stdc++.h>
using namespace std;
#define int long long

void io()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

bool validans(int *books,int ans,int n,int k){
	int students=1;
	int currentPages=0;
	for(int i=0;i<n;i++){

		if((currentPages+books[i])>ans){
			currentPages=books[i];
			students++;
			if(students>k)
				return false;
		} 
		else{
			currentPages+=books[i];
		}

		
	}
	return true;
}


int binarySerchBooks(int *books,int n,int k){
	int totalPage=accumulate(books,books+n,0);
	int s=books[n-1];
	int e=totalPage;

	int finalans=s;

	while(s<=e){
		int mid=(s+e)/2;

		if(validans(books,mid,n,k)){
			finalans=mid;
			e=mid-1;

		}
		else{
			s=mid+1;

		}

		// cout<<finalans<<endl;

	}

	return finalans;


}


void solve()
{

	int n,k;
	cin>>n>>k;

	int books[1000000];
	for(int i=0;i<n;i++)
		cin>>books[i];


	cout<<binarySerchBooks(books,n,k)<<endl;

}



int32_t main()
{
	io();
	solve();
	return 0;
}
