#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if (a==0)
    {
        cout << "https://www.codechef.com/practice";
    }
    else
    {
        if (b==0)
        {
            cout<<"https://www.codechef.com/contests";
        }
        else if (b==1)
        {
            cout<<"https://discuss.codechef.com";
        }
        else
        {
            cout<<"Wrong Input";
        }
    }
}