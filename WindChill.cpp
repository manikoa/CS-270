/* Maniko Anthony HW01 Assignment */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Welcome to the Wind Chill Calculator! " << endl;
    cout << "Please enter temperature in degrees Fahrenheit: \n";
    cout << "Please enter Wind Speed in mph:\n";

    double temperature;
    cin >> temperature;
    double WindSpeed;
    cin >> WindSpeed; 

    double WindChill; // Declare the WindChill variable

    // Calculate the Wind Chill using Fahrenheit and Wind Speed in mph.
    WindChill = 35.74 + 0.6215 * temperature - 35.75 * pow(WindSpeed, 0.16) + 0.4275 * temperature * pow(WindSpeed, 0.16);
    cout << "The Wind Chill is " << WindChill << " degrees F today." << endl;

    return 0;
}
