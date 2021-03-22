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


BiTreeNode* BuildTree(){

	int data;
	cin>>data;

	if(data==-1)
		return NULL;

	BiTreeNode* root=new BiTreeNode(data);
	root->left=BuildTree();
	root->right=BuildTree();

	return root;

}





void solve()
{

	BiTreeNode* root=BuildTree();


	printTree(root);
}



int32_t main()
{
	io();
	solve();
	return 0;
}