#include<iostream>
using namespace std;
int main()
{
    int num=0;
    
    cout<<"Enter the number to be checked:";
    cin>>num;

    int originalNum=num;
    int temp=num;
     int digit=0;
    
    while(temp>0)
    {
        digit++;
        temp/=10;
    }
    cout<<"The Number of Digits Present in the number are:"<<digit<<"\n";

    temp=num;
    int arr[40] ;

    for(int i=0;i<digit;i++)
    {
        arr[i]=temp%10;
        temp/=10;
    }

    int total=0;

    for(int i=0;i<digit;i++)
    {
        int result=1;
        for(int j=0;j<digit;j++)
        {
           result*=arr[i];
        }

        cout<<i+1<<"digit in the number is:"<<arr[i]<<"\n";
        total+=result;    
    }
    cout<<"Total After Powers to all the digits:"<<total<<"\n";
    if (total==originalNum)
    {
        cout<<originalNum<<" is a Armstrong Number";
    }
    else
    {
        cout<<originalNum<<"is not a armstrong number";
    }
    return 0;

}
