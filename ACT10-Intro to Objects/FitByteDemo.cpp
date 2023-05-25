#include <iostream>
#include "FitByte.h"

int main() {
    std::cout << "FitByte Marathon Walker!\n";

    // (1) Declare a FitByte object
    FitByte Alice;

    // (2) Walk some miles
    Alice.walk(10);
    Alice.walk(5);

    // (3) Call methods to get and print distance and calories
    std::cout << "Distance walked today: " << Alice.getMilesWalked() << " miles." << std::endl;
    std::cout << "Calories burned today: " << Alice.getCaloriesBurned() << std::endl;

    //--- TRY IT --------------
    // Create another FitByte and go for a few walks, and report on the miles and calories.
    FitByte Bob; // (4) Declare a new FitByte object
    Bob.walk(3);
    Bob.walk(2);
    std::cout << "Distance walked today (Bob): " << Bob.getMilesWalked() << " miles." << std::endl;
    std::cout << "Calories burned today (Bob): " << Bob.getCaloriesBurned() << std::endl;

    return 0;
}
