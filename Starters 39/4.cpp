#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        long long n;
        cin>>n;
        long long a[n];
        int b=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i!=0 && a[i]==a[i-1])
            {
                b++;
            }
        }
        cout<<b<<endl;
        t--;
    }
}