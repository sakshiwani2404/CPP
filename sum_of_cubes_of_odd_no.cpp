#include<iostream>
using std::cout;
using std::cin;
int main()
{
    int num,sum=0;
    cout<<"Enter a Number uptil which Sum of Cubes Of Odd Numbers To be found:";
    cin>>num;
    for(int i=1;i<=num;i++)
    {    
        if(i%2)
            sum += i*i*i;
    }
    cout<<"The Sum is:"<<sum;
    return 0;
}
