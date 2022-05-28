#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int friends[T];
    for(int i=0;i<T;i++)
    {
        cin>>friends[i];
    }
    for(int j=0;j<T;j++)
    {
        if(friends[j]%4==0)
        {
            cout<< (friends[j]/4)<<endl;;
        }
        else if(friends[j]<4)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<((friends[j]/4)+1)<<endl;
        }
    }
}