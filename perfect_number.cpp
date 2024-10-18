#include<iostream>
using namespace std;

int main()
{
    int num,sum=0;
    cout<<"Enter a number to be checked as perfect number:";
    cin>>num;
    for(int i=1;i<=num/2;i++)
    {
        if(!(num%i))
            sum+=i;
        
    }
    if(num==sum)
        cout<<"The number "<<num<<" is a Perfect Number";
    else
        cout<<"The Number "<<num<<" is not a Perfect Number";
    return 0;
}
