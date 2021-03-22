#include<bits/stdc++.h>
using namespace std;


void calculateSpan(int price[], int n, int S[])
{
   // Your code here
   stack<int> s;
   s.push(0);
   for(int i=0;i<n;i++)
   {
       while(s.empty()==false && price[s.top()]<=price[i])
       {
           s.pop();
       }
       int span;
       if(s.empty())
        span=i+1;
        else
        span=(i-s.top());

        S[i]=span;

        s.push(i);

   }

}




int main()
{
  int t;
  cin>>t;
  int n;
  int a[1000000],s[1000000];

  while (t--) {
    /* code */

    cin>>n;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }

    calculateSpan(a,n,s);

    for(int i=0;i<n;i++)
    {
      cout<<s[i]<<" ";
    }
    cout<<endl;


  }




  return 0;
}
