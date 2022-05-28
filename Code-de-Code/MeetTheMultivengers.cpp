#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long p[n];
        long long max=-1000000000;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
        }
        for(long long j=0;j<n;j++)
        {
            for(long long k=j;k<n;k++)
            {
                sum=sum+p[k];
                if(sum>max)
                {
                    max=sum;
                }
            }
            sum=0;
        }
        cout<<max<<endl;
    }
}