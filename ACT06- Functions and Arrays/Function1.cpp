#include <iostream> // Include the input/output stream library for basic I/O operations.
using namespace std; // Use the standard namespace.

// Example function that receives no arguments, returns no value.
void printStars()
{
  int s = 0;
  while(s < 10) 
  {
    cout << "*";
    s++;
  }
  cout << endl;
}

// Example function that receives no arguments, returns a type double value.
double findBoxVolume() 
{
  // Compute product of box width x height x depth
  double v = 2 * 4 * 3;
  return v;
}

int main() 
{
	// Experiment and observe. Type your responses in // comments for each TRY IT question.
	
	// TRY IT #1. What happens if we type the comment // before both of these two statements?
	// The code does not execute anything.
	printStars();
	printStars();
	
	// TRY IT #2. Why don't we get any visible numeric result from these two statements?
	// The function returns a value, but that value is not printed or assigned to a variable.
	// The code computes the volume of the box but doesn't do anything with the result.
	cout << "Calling findBoxVolume..." << endl;
	findBoxVolume();
	
	// TRY IT #3. Why do we get a visible numeric result this time?
	// We get a visible numeric number because the function call findBoxVolume() 
	// is part of an output statement that prints the computed value to the console.
	cout << "Volume of a box is " << findBoxVolume() << " cubic inches" << endl;
	
	double boxVolume = findBoxVolume();
	cout << "The box volume is " << boxVolume << " cubic inches" << endl;
	
	// TRY IT #4. Call findBoxVolume() as part of the Boolean question for an if-else statement.
	// Example: if volume of the box is more than 20, then print one message; else, print another.
	if (findBoxVolume() > 20) 
	{
		cout << "The box is large" << endl;
	}
	else 
	{
		cout << "The box is small" << endl;
	}
	
	// TRY IT #5. Call findBoxVolume() as part of a while loop's Boolean condition.
	// Example: while loopCounter < findBoxVolume(), call printStars()
	int loopCounter = 0;
	while (loopCounter < findBoxVolume()) 
	{
		printStars();
		loopCounter++;
	}
	
	return 0;
}
