#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter a Natural Number uptil which Sum to be found:";
    cin>>num;
    for(int i=0;i<=num;i++)
        sum+=i;
    cout<<"The Sum Of First "<< num<<" Natural Numbers: "<< sum;
    return 0;
}
