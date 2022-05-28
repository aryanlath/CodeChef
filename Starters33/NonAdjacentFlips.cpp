#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    string S[T];
    int a=0;
    int b=0;
    int N;
    for (int i=0;i<T;i++)
    {
        cin>>N>>S[i];
    }
    for(int j=0;j<T;j++)
    {
        
        for(int k=0;k<S[j].length();k++)
        {
            if (S[j][k] == '1')
            {
                if(S[j][k+1]=='1')
                { 
                   a++;
                }
            }
            if (S[j][k]=='0')
            {
                b++;
            }
        }
        if(a>=1)
        {
            cout<<2<<endl;
        }
        else if(b==S[j].length())
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
        a=0;
        b=0;
    }
}
