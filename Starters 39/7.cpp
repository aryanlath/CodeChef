#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t>0)
    {
        long long n,k,inf=0;
        cin>>n>>k;
        long long u[n-1],v[n-1],x[n-1],inc[k];
        for(int i=0;i<n-1;i++)
        {
            cin>>u[i]>>v[i]>>x[i];
        }
        for(int j=0;j<n-1;j++)
        {
            for(int l=0;l<n-1;l++)
            {
                if(u[l]==j+1)
                {
                    if(x[l]==0)
                    {
                        inc[inf]=v[l];
                        inf++;
                    }
                }
            }
        }
        t--;
    }
}