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
    for(int j=0;j<N;j++)
    {
        int family[N];
        int k=0;
        if(a[j]==j+1)
        {
            family[k]=j+1;
            k++;
        }
    }
}