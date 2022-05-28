#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l;
    cin>>l;
    int n=1;
    while(l--)
    {
        int p,e;
        cin>>p>>e;
        n*=pow(p,e);
    }
    cout<<n<<endl;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            for(int k=1;k<=i;k++)
            {
                if(i%k==0)
                {
                sum+=k;
                }
            }
        }
    }
    cout<<sum<<endl;
}