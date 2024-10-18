#include<iostream>
using namespace std;
void createMagicSquare(int magic[][21],int n)
{
  int cr,cc,pr,pc;
  int k=1;
  magic[0][n/2]=k++;
  cr=0;
  cc=n/2;
  while(k < n*n)
  {
    pr=cr;
    pc=cc;
    cc++;
    if(cc==n)
      cc=0;
    cr--;
    if(cr==-1)
      cr= n-1;
    if(magic[cr][cc])
    {
      cr=pr+1;
      cc=pc;
    }
    magic[cr][cc]=k++;
  }
  }
int printMagicSquare(int magic[][21],int n)
{
  cout<<"Magic Square of Size "<< n<< "*"<< n << "\n";
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum+=magic[i][0];
    for(int j=0;j<n;j++)
    {
      cout.width(4);
      cout<<magic[i][j];
    }
    cout<<"\n";
  }
  return sum;
}
int main()
{
  int magic[21][21]={0};int n;
  cout<<"Enter Odd Dimensions:";
  cin>>n;
  createMagicSquare(magic,n);
  int sum=printMagicSquare(magic,n);
  cout<<"Sum For Each Row/Column /Diagonal is:"<<sum<<"\n";
  return 0;
}
  



  
