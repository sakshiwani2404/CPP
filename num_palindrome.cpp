#include<iostream>
using namespace std;

int main()
{
    int num=54321,num1=num,rev=0;
    
    while(num)
    {
        rev*=10 ;
        rev+=num%10;
        num/=10;
        
    }
    if(num1==rev) 
        cout << "The Number is Palindrome" << "\n";
    else
        cout << "The Number is Not Palindrome" << "\n";    
}
