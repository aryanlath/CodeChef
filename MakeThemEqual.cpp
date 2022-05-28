#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int N[T];
   int A[100][100];
   
    for(int i=0;i<T;i++)
    {
         
         for (int c=0;c<N[i];c++)
         {
          cin>>N[i]>>A[i][c];
         }
    }
    for(int j=0;j<T;j++)
    {
        int odd=0;
        int even=0;
        for(int k=0;k<N[j];k++)
        {
            if(A[j][k]%2==0)
            {
                even++;
            }
            else
            {
               odd++;
            }         
        }
        if(odd%2==0)
        {
            for (int l=0;l<N[j];l++)
            {
                if(A[j][l]%2!=0)
                {
                    for(int m=l+1;m<N[j];m++)
                    {
                        if(A[j][m]%2!=0)
                        {
                            A[j][N[j]+1]=A[j][l]+A[j][l+1];
                            
                        }
                    }
                }
            }
        }
    }
}