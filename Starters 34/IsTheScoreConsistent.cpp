#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int A[T],B[T],C[T],D[T];
    for(int i=0;i<T;i++)
    {
        cin>>A[i]>>B[i];
        cin>>C[i]>>D[i];
    }
    for(int j=0;j<T;j++)
    {
        if(C[j]-A[j]>=0 && D[j]-B[j]>=0)
        {
            cout<<"POSSIBLE"<<endl;
        }
        else
        {
            cout<<"IMPOSSIBLE"<<endl;
        }
    }
}