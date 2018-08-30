// Q.4 Write a C++ program to find out whether a number is divisible by 5 and 11 or not.


// Include library
  #include <iostream> 
  using namespace std ; 

// Include main function
    int main() {
 
// Declare variables
  	int num;

// Ask the terminal for a number
	cout << "Write a number." << endl;
        cin >> num;

// Write condition to check whether a number is divisible by 5 and 11.
	{
	 if (num%5 == 0 && num%11 == 0)
// To do
	 cout << num <<" is divisible by 5 and 11." << endl;
	
	 else
// To do
	 cout << num <<" is not divisible by 5 and 11." << endl;

	  };
 

             return 0;
                }
