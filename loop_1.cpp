// Q.1 Write a C++ program to list out n natural numbers using .


// Include library
  #include <iostream> 
  using namespace std ; 

// Include main function
    int main() {
 
// Declare variables
  	int n, i ;
        i=0;

// Ask the terminal for the number of natural numbers needed
        cout << "Enter number of natural numbers needed." << endl;
        cin >> n;
// Command to display the numbers
        cout << "The first " << n << " natural numbers are " << endl;

	while (i++ < n)
	{
	 cout << i << endl;
	};
 
	   return 0;
                }

