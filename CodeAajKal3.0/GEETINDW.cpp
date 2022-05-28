#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int m,n,y;
        cin>>m>>n>>y;
        if (y%3==0 && y/3<(n*n*n) && y/3>(m*m*m) )
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}