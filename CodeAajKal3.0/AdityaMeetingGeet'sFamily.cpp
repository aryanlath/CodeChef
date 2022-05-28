#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    int Q;
    cin>>Q;
    int A[Q],B[Q],C[Q];
    for(int j=0;j<Q;j++)
    {
        cin>>A[j]>>B[j]>>C[j];
        if(a[A[j]-1]==C[j] && a[B[j]-1]==C[j])
        {
            cout<<"YES"<<endl;
        }
        else if(a[A[j]-1]==A[j] && a[B[j]-1]==C[j])
        {
            cout<<"YES"<<endl;
        }
        else if(a[B[j]-1]==B[j] && a[A[j]-1]==C[j])
        {
            cout<<"YES"<<endl;
        }
        else if(a[A[j]-1]==B[j] || a[B[j]-1]==A[j])
        {
            cout<<"YES"<<endl;
        }
        else if(a[a[A[j]-1]]==B[j]|| a[a[B[j]-1]]==A[j])
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }

}