#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int N[T],X[T];
    int A[T][100];
    int a,b;
    int sum=0;
    for (int i=0;i<T;i++)
    {
        cin>>N[i]>>X[i];
        for(int j=0;j<(N[i]-1);j++)
        {
            cin>>A[i][j];
        }
    }
    for(int k=0;k<T;k++)
    {
        a=N[k]*X[k];
        for(int l=0;l<(N[k]-1);l++)
        {
            sum=sum+A[k][l];
        }
        b=a-sum;
        if(b>0)
        {
        cout<<b<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
        a=0;
        b=0;
        sum=0;
    }
}