#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a Natural Number uptil which Squares to be found:";
    cin>>num;
    for(int i=1;i<=num;i++)
        cout<<"Square of "<< i<< " is :"<< i*i<<"\n";
    return 0;
}
