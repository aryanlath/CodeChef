#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int X[T],Y[T];
    for(int i=0;i<T;i++)
    {
        cin>>X[i]>>Y[i];
    }
    for(int j=0;j<T;j++)
    {
        if(X[j]>=(Y[j]*30))
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }

}