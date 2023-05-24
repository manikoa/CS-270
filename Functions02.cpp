#include <iostream> // Include the input/output stream library for basic I/O operations.
using namespace std; // Use the standard namespace.

// TRY IT: 
// What happens if we move the function definitions after/below the main function definition?
// The code is not compiling. I'm getting errors.

int main() {
	printStars();
	
	cout << "Volume of a box is " << findBoxVolume() << " cubic inches" << endl;
	
	double boxVolume = findBoxVolume();
	cout << "The box volume is " << boxVolume << " cubic inches" << endl;
	
	if ( findBoxVolume() > 20 )
		cout << "Box volume is more than 20." << endl;
}

// Example function that receives no arguments, returns no value.
void printStars()
{
  int s = 0;
  while(s < 10) {
    cout << "*";
    s++;
  }
  cout << endl;
}

// Example function that receives, no arguments, returns a type double value.
double findBoxVolume() 
{
  // Compute product of box width x height x depth
  double v = 2 * 4 * 3;
  return v;
}
