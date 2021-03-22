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



class BiTreeNode{
public:
	int data;
	BiTreeNode* left;
	BiTreeNode* right;

	BiTreeNode(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};


void printTree(BiTreeNode* root){

	if(root==NULL)
		return;

	cout<<root->data<<" : ";
	if(root->left!=NULL)
		cout<<" L-> "<<root->left->data;
	if(root->right!=NULL)
		cout<<" R-> "<<root->right->data;

	cout<<endl;

	printTree(root->left);
	printTree(root->right);
}






void solve()
{

	BiTreeNode* root=new BiTreeNode(1);
	BiTreeNode* node1=new BiTreeNode(2);
	BiTreeNode* node2=new BiTreeNode(3);
	root->left=node1;
	root->right=node2;

	printTree(root);
}



int32_t main()
{
	io();
	solve();
	return 0;
}