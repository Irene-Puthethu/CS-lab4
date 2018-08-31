// Q.3 Write a C++ program to print all alphabets from a to z using loop.

// Include the library

#include<iostream>
using namespace std;

// Give the main function
	  int main (){
// Write the data type and variable
	char var = 'a' ;

	int i= int(var);

// Command to give output
	while (i>=97 && i<=122)
	{
	 cout <<char(i)<< endl;
	i++;
	}
return 0 ;
      
        }
