#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int cab1[T];
    int cab2[T];
    for(int i=0;i<T;i++)
    {
        cin>>cab1[i]>>cab2[i];

    }
    for(int j=0;j<T;j++)
    {
        if(cab1[j]<cab2[j])
        {
            cout<<"FIRST"<<endl;
        }
        else if (cab1[j]>cab2[j])
        {
            cout<<"SECOND"<<endl;
        }
        else if (cab1[j]==cab2[j])
        {
            cout<<"ANY"<<endl;
        }
    }
}