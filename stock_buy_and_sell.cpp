#include <bits/stdc++.h>
using namespace std;


void stockBuySell(int a[], int n)
{

    // Your code here
    int buy=0;
    int sell=0;
    int profit=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            sell=i;
        }
        else
        {
            if(sell!=0 || buy!=0)
            {
                if(sell>buy)
                    cout<<"("<<buy<<" "<<sell<<") ";
            }
            buy=i;
        }
    }

        if(sell==0)
        cout<<"No Profit";
        if(sell>buy)
            cout<<"("<<buy<<" "<<sell<<") ";


}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        stockBuySell(a,n);

        cout<<endl;
    }

    return 0;
}
