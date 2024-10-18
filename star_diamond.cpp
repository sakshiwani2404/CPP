#include<iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows:" ;
    cin>>rows;
    
    for(int i=1;i<=rows/2+1;i++) 
    {
        for(int j=1;j<=rows+1-2*i; j++) 
            cout<<" ";
        for(int j=1;j<=2*i-1; j++) 
            cout<<"* ";
        cout<<"\n";   
    }
   for(int i=1;i<=rows/2;i++) 
    {
        for(int j=1;j<=2*i; j++) 
            cout<<" ";
        for(int j=1;j<=rows-2*i; j++) 
            cout<<"* ";
        cout<<"\n";   
    }
   return 0;
}
