#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int N[T];
    int X[T];
    int sum=0;
    int b=0;
    for(int i=0;i<T;i++)
    {
        cin>>N[i];
        cin>>X[i];
    }
    for(int j=0;j<T;j++)
    {
        for(int k=1;k<N[j];k++)
        {
        cout<<k<<" ";
        sum=sum+k;
        }
        b+= (N[j] * X[j]) - sum;
        cout<<b<<endl;
        sum=0;
        b=0;
    }
}