#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        long long a=0,b=0;
        long long n;
        cin>>n;
        while (n>0)
        {          
            string s;
            cin>>s;
            if(s=="START38")
            {
                a++;
            }
            else if(s=="LTIME108")
            {
                b++;
            }
            n--;
        }
        cout<<a<<" "<<b<<endl;
        t--;
    }
}