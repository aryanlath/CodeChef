#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int b=0;
    int N;
    int X;
    int sum;
    for(int i=0;i<T;i++)
    {
        cin>>N;
        cin>>X;
        for(int j=1;j<N;j++)
        {
            sum=sum+j;
            cout<<j<<" ";
        }
        b+=((N * X)-sum);
        cout<<b<<endl;
        sum=0;
        b=0;
    }
}