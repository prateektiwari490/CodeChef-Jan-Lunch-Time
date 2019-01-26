#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x;
        cin>>n>>k;
        int r[n+1] = {},c[n+1] = {};
        for(int i=0;i<k;i++)
        {
            cin>>x;
            r[x] = 1;
            cin>>x;
            c[x] = 1;
        }
        cout<<(n-k)<<" ";
        pair <int ,int> a[n-k];
        int m = 0,b = 0;
        for(int i=1;i<=n;i++)
        {
            if(r[i]==0)
            {
                a[m].first=i;
                m++;
            }
            if(c[i]==0)
            {
                a[b].second=i;
                b++;
            }
        }
        for(int i=0;i<n-k;i++)
        {
            cout<<a[i].first<<" "<<a[i].second<<" ";
        }
    }
}