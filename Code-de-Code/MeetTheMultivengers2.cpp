#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long p[n];
        for(long long j=0;j<n;j++)
        {
            cin>>p[j];
        }
        long long sum=0;
        long long max=-1000000000;
        long long negative=0;
        for(long long l=0;l<n;l++)
        {
        if(p[l]<0)
            {
                negative++;
            }
        }
        if(negative!=n)
        {
            for (long long i=0;i<n;i++)
            {
                sum=sum+p[i];
                if(p[i]<0)
                {
                    negative++;
                }
                if (sum>max)
                {
                    max=sum;
                }
                if (sum<0)
                {
                    sum=0;
                }              
            }
            cout<<max<<endl;
        }
        long long max2=-1000000000;
        if(negative==n)
        {
            for (long long k=0;k<n;k++)
            {
                if(p[k]>max2)
                {
                    max2=p[k];
                }
            }
            cout<<max2<<endl;
        }
    }
}