#include<iostream>
using namespace std;


int main()
{
    int M,N;
    cin>>M>>N;
    int arr[M][N],sum;
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<N;i++)
    {
        sum=0;
        for(int j=0;j<M;j++)
        {
            sum+=arr[j][i];
        }
        cout<<sum<<' ';
    }




}
