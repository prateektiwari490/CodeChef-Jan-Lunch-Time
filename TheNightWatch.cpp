#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int ar[t] = {0};
    for(int k=0;k<t;k++)
    {
        int n;
        cin>>n;
        string c;
        cin>>c;
        for(int i=0;i<n;i++)
        {
            if(n==1 && c[i]=='0')
            {
                c[i] = '1';
                ar[k]++;
            }
            else if(c[i]==1)
            {
                continue;
            }
            else if( (i==0 && c[i]=='0' && c[i+1]=='0') || (i==n-1 && c[i]=='0' && c[i-1]=='0') || (c[i]=='0' && c[i-1]=='0' && c[i+1]=='0') )
            {
                c[i] = '1';
                ar[k]++;
            }
        }
        //cout<<"\nOur string is "<<c<<endl;
    }
    for(int i=0;i<t;i++)
    {
        cout<<ar[i]<<endl;
    }
}