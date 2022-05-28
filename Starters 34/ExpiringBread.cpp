#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int arr[T],N[T],M[T],K[T];
    for(int i=0;i<T;i++)
    {
        cin>>N[i]>>M[i]>>K[i];
    }
    for(int j=0;j<T;j++)
    {
        if((M[j]*K[j])>=N[j])
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}