// Q.4 Write a C++ program to print all even numbers from 1 to 100.


// Include the library

#include<iostream>
using namespace std;

// Give the main function
	  int main (){ 
 
//Write variable and data type
          int i;
          i = 1;
          

//Command to display while
         while ( i <= 100)
	{
	if (i%2 == 0){
	 cout << i << endl;
	}
         i++;
	}

           return 0;
            }
