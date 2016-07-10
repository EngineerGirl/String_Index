/*
 ==============================================================================================================================
 Name        : string_reverse.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Implement reverse of a string
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
    char name[]="Siddhata";
    string reverse_output;
    reverse_output=reverse1 (name);
    cout<<reverse_output;
    return 0;
}
