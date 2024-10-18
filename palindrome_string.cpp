#include<iostream>
using namespace std;

int stringLength(char string1[])
{
    int i=0;
    while(string1[i++]);
    return i-1;
}

void stringCopy(char string1[],char string2[])
{
    int i=0;
    while(i)
    {
        string2[i] = string1[i];
        i++;
    }
    string2[i]=string1[i];
        
}

void stringReverse(char string2[],int j)
{
    int i=0;
    while(i<j)
    {
            char temp= string2[i];
            string2[i]=string2[j];
            string2[j]= temp;
            string2[j]= string2[i]+string2[j]-(string2[i]=string2[j]);
            j--;
            i++;
    }
}

int stringCompare(char string1[], char string2[])
{
    int i=0;
    while(string1[i] && string2[i])
    {
        if(string1[i]!=string2[i])
        {
            return 0;
        }
        i++;
    }
    return string1[i]== string2[i];    
}
int main()
{
    char string1[50]; char string2[50];
    cout<<"Enter the string to be checked:";
    cin.getline(string1,50);

    int length = stringLength(string1);
    
    stringCopy(string1,string2);
    stringReverse(string2, length);
    
    if(stringCompare(string1,string2))
        cout<<"String is Palindrome";
    else
        cout<<"String is not Palindrome";

    return 0;

}
