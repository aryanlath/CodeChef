#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        if(n>4)
        {
        cout<<((n/5)*4)+(n%5)<<endl;
        }
        else
        {
            cout<<n<<endl;
        }
        t--;
    }
}