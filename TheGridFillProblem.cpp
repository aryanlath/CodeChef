#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    int arr[T];
    for (int i=0;i<T;i++)
    {
       cin>>arr[i];
    }
    for(int j=0;j<T;j++)
    {
        int arr2[arr[j]][arr[j]];
        if(arr[j]>=2 && arr[j]%2==0)
        {
            for(int k=0;k<arr[j];k++)
            {
                for(int l=0;l<arr[j];l++)
                {
                    arr2[k][l] = -1;
                    cout<<arr2[k][l]<<" ";
                }
                cout<<endl;
            }
        }
        if(arr[j]>=2 && arr[j]%2!=0)
        {
            for(int m=0;m<arr[j];m++)
            {
                for (int n=0;n<arr[j];n++)
                {
                    if(n==m)
                    {
                        arr2[m][n]=-1;
                    }
                    if(n!=m)
                    {
                        arr2[m][n]=1;
                    }
                    cout<<arr2[m][n]<<" ";
                }
                cout<<endl;
            }
        }
    }
}