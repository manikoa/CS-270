#include <iostream>
#include <cmath>

using namespace std;

// rectangleArea
// pre-condition: receives double value giving width in feet
// pre-condition: receives double value giving height in feet
// post-condition: returns area as a double value.
double rectangleArea(double width, double height) {
    return width * height;
}

// metricToEnglishTemperature
// pre-condition: receives a double value giving a temperature in degrees Celsius.
// post-condition: returns a double value giving the equivalent temperature in degrees Fahrenheit.
double metricToEnglishTemperature(double temperature) {
    return temperature * 1.8 + 32;
}

// yearsToHours
// pre-condition: receives an integer value giving a number of years
// post-condition: returns an integer value giving the number of hours in the given number of years
int yearsToHours(int years) {
    return years * 24 * 365.25;
}

// findDistance
// pre-condition: receives a double value giving a number of hours to travel
// pre-condition: receives a double value giving a speed in miles per hour
// post-condition: returns a double value for the number of miles travelled by a vehicle moving at the given speed for the given number of hours
double findDistance(double hours, double speed) {
    return speed * hours;
}

// findCircumference
// pre-condition: receives a double value giving the radius of a planet in miles.
// post-condition: returns a double value giving the circumference in miles.
double findCircumference(double radius) {
    return 2 * 3.1415 * radius;
}

int main() {
    // TRY IT #1: Call the `rectangleArea` function with width 13 and height 8
    cout << "Rectangle area: " << rectangleArea(13, 8) << endl;

    // TRY IT #2: Call the `metricToEnglishTemperature` function with temperature 78
    cout << "Temperature in Fahrenheit: " << metricToEnglishTemperature(78) << endl;

    // TRY IT #3: Call the `yearsToHours` function with years 6
    cout << "Hours in 6 years: " << yearsToHours(6) << endl;

    // TRY IT #4: Call the `findDistance` function with hours 3.5 and speed 60
    cout << "Distance traveled: " << findDistance(3.5, 60) << " miles" << endl;

    // TRY IT #5: Call the `findCircumference` function with radius 10
    cout << "Circumference of a planet: " << findCircumference(10) << " miles" << endl;

    return 0;
}
