#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int count;
    for(int i=0;i<T;i++)
    {
        int N;
        cin>>N;
        int A[N];
        for(int j=0;j<N;j++)
        {
            cin>>A[j];
        }
        for(int k=0;k<N;k++)
        {
            for(int l=(k+1);l<N;l++)
            {
                if(A[k] * A[l]>0)
                {
                    count ++;
                }
            }
        }
        cout<<endl;
        cout<<count<<endl;
        count=0;
    }
}