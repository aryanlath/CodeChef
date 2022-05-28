#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int count=0;
        while((N-5)>=0)
        {
            count++;
            N=N-5;
        }
        while((N-3)>=0)
        {
            count ++;
            N=N-3;
        }
        while((N-1)>=0)
        {
            count ++;
            N=N-1;
        }
        cout<<count<<endl;
    }
}