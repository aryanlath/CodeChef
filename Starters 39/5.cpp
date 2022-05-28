#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int x,y;
        cin>>x>>y;
        int a= (500-(2*x)) + (1000 - (4*(x+y)));
        int b=(1000-(4*y) + (500-(2*(x+y))));
        if(a>b)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<b<<endl;
        }
        t--;
    }
}