#include<iostream>
using namespace std;
void createSpiral(int spiral[][21],int n)
{
    int k=1;
    for(int iter =0; iter<=n/2; iter++)
    {
        for(int j= iter; j<=n-1-iter; j++)
            spiral[iter][j]=k++;

        for(int j= iter+1; j<=n-1-iter; j++)
            spiral[j][n-1-iter]=k++;

        for(int j= n-2-iter; j>=iter; j--)
            spiral[n-1-iter][j]=k++;

        for(int j= n-2-iter; j>iter; j--)
            spiral[j][iter]=k++;    
    }

}
void printSpiral(int spiral[][21],int n)
{
    cout<<"Spiral Matrix Of Size "<<n<<"*"<<n<<"\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout.width(5);
            cout<<spiral[i][j];
        
        }
        cout<<"\n";
    }
}
int main()
{
    int spiral[21][21],n;
    cout<<"Enter Odd Size :";
    cin>>n;
    createSpiral(spiral,n);
    printSpiral(spiral,n);
    return 0;
}
