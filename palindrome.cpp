/*
 ==============================================================================================================================
 Name        : palindrome.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Implement if string is a Palindrome or not
 ==============================================================================================================================
 */

#include <iostream>
using namespace std;
#include <string>

int length(string s)
{
    int i;
    for( i=0; s[i]!='\0';++i)
    {

    }
    return i;
}

string reverse1 (string s)
{
    int i;
    string temp="";
    for(i=0; i<(length(s)/2);i++)
    {
          temp[i]=s[i];
    s[i]=s[length(s)-1-i];
    s[length(s)-1-i]=temp[i];
    }

    return s;
}

int main()
{
    char name[]="madam";
    string reverse_output;
    reverse_output=reverse1 (name);
    if (reverse_output==name)
    {
        cout<<"Palindrome"<<endl;
    }
    else cout<<"Not a Palindrome"<<endl;
    return 0;
}
