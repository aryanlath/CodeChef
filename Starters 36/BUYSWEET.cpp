#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n,r;
        cin>>n>>r;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int j=0;j<n;j++)
        {
            cin>>b[j];
        }
        int min=a[0]-b[0];
        int x=0;
        for(int l=0;l<n;l++)
        {
            if(a[l]-b[l]<min)
            {
                min=a[l]-b[l];
                x=l;
            }
            else if(a[l]-b[l]==min)
            {
                if(a[l]<a[x])
                {
                    min=a[l]-b[l];
                    x=l;
                }
            }
        }
        int count=0;
        if(r>=a[x])
        {
            count=1;
            while(r>0)
            {
            if(r-a[x]+b[x]>=a[x])
            {
                r=r-a[x]+b[x]>=a[x];
                count++;
            }
            else
            {
                r=0;
            }
            }
        }
        else
        {
            count=0;
        }
        if(r>0)
        {
            sort(a,a+n);
            count=count+r/a[0];
        }
        cout<<count<<endl;
        t--;
    }
}