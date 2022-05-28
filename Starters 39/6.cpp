#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t>0)
    {
        long long n;
        cin>>n;
        char c[n];       
        long long ans=1,m=1e9+7;
        for(long long i=0;i<n;i++)
        {
            cin>>c[i];
            if(c[i]=='c' || c[i]=='g' || c[i]=='l' || c[i]=='r')
            {
                ans=(ans*2)%m;
            }
        }       
        cout<<ans<<endl;
        t--;
    }
}   