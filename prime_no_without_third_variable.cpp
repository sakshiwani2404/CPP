#include<iostream>
using namespace std;

int main()
{
    int num,i;
    cout<<"Enter a number to be checked as prime number:";
    cin>>num;
    for(i=2;i<=num/2;i++)
    {
        if(!(num%i))
        {
            cout<<"The Number "<< num <<" is a Composite Number";
            break;
        }
    }
    if(i==num/2+1)
        cout<<"The Number "<< num <<" is a Prime Number";
    
    return 0;
}
