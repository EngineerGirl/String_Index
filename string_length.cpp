/*
 ==============================================================================================================================
 Name        : string_length.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Implement the length of a string
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

int main()
{
    char name[]="Siddhata";
   
   int d = length(name);
   cout<<d<<endl;
  
    return 0;
}
