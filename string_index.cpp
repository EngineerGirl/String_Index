/*
 ==============================================================================
 Name        : String_index.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Description : Find the starting index that starts the window with maximum number 
               of same charachters one after the other using cpp
 ==============================================================================
 */
 
 #include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

	int index=0;
	int max_count=0;
	int count = 0;
int find(char A[], int size, int i)
{
	if (A[i]==A[i+1])
	{
		count++;
		if (max_count<count)
		{
			max_count=count;
			index=i;
		}
	}
	else count=0;
		if(i>size)
	{
		return index-max_count+1;
	}
			else return find(A,size,++i);

	
}

int main()
{
	char A[12]={'a','b','a','a','b','b','b','b','b','a','a','a'};
	int index_final=find(A,12,0);
	cout<<"Index: "<<index_final<<endl;
	system("pause");
	return 0;
}
