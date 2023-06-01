#include <iostream> // Include the input/output stream library for basic I/O operations.
using namespace std; // Use the standard namespace.

// printStars
// pre-condition: Receives integer argument telling how many stars to print.
// post-condition: Prints a row of numStars asterisks.
void printStars(int numStars)
{
    int s = 0;
    while (s < numStars) 
    {
        cout << "*";
        s++;
    }
    cout << endl;
}

// findBoxVolume
// pre-condition: Receives double arguments for width, height, and depth of a box.
// Assume that the three given dimensions are all positive > 0.
// post-condition: Return volume as a type double value.
double findBoxVolume(double width, double height, double depth)
{
    // compute product of box width x height x depth
    double v = width * height * depth;

    return v;
}

// findCircleArea
// pre-condition: Receives a type double value for the radius.
// post-condition: Returns area as a type double value.
double findCircleArea(double radius)
{
    // compute area of circle using formula
    double area = 3.141 * radius * radius;

    return area;
}

int main() 
{
    printStars(10);
    printStars(20);

    // TRY IT #1. Print a row of 30 stars.
    printStars(30);

    // TRY IT #2. Write a while counting loop that counts from 1 to 20.
    //            Inside the body of the while loop, call printStars with the loop counter variable as the argument.
    //            What shape do you expect this loop to print?
    int i = 1;
    while (i <= 20) 
    {
        printStars(i);
        i++;
    }
    // This loop will print a triangle shape with an increasing number of stars in each row.

    cout << "Volume of a box is " << findBoxVolume(2, 4, 3) << " cubic inches" << endl;

    // TRY IT #3. Prompt the person to enter type double values for width, height, and depth.
    // Call findBoxVolume, passing it the variables that hold the person's three input values.
    // Print a message indicating the volume of the shape.
    double width, height, depth;
    cout << "Please enter the width: " << endl;
    cin >> width;
    cout << "Please enter the height: " << endl;
    cin >> height;
    cout << "Please enter the depth: " << endl;
    cin >> depth;

    double boxVolume = findBoxVolume(width, height, depth);
    cout << "The box volume is " << boxVolume << " cubic inches" << endl;

    return 0;
}
