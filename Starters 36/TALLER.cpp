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
        if(y>x)
        {
            cout<<"B"<<endl;
        }
        else if(x>y)
        {
            cout<<"A"<<endl;
        }
        t--;
    }
}