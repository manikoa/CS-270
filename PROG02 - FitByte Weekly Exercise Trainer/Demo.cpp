#include <iostream>
#include "FitByte.h"

using namespace std;

int main() {
    FitByte fb1;
    FitByte fb2;

    fb1.walk(2.5); // person 1 walks 2.5 miles
    fb1.walk(1.2); // person 1 walks another 1.2 miles
    fb1.nextDay(); // person 1 goes to next day
    fb1.walk(3.1); // person 1 walks 3.1 miles
    fb1.walk(2.8); // person 1 walks another 2.8 miles
    fb1.nextDay(); // person 1 goes to next day
    fb1.walk(1.0); // person 1 walks 1.0 miles
    fb1.walk(1.5); // person 1 walks another 
#include <iostream>
#include "FitByte.h"

using namespace std;

int main() {
    // Create two FitByte objects using the constructor
    FitByte fb1;
    FitByte fb2;

    // Have each FitByte person walk at least three days, each day should include at least two walks
    fb1.walk(2.5);  // person 1 walks 2.5 miles
    fb1.walk(1.2);  // person 1 walks another 1.2 miles
    fb1.nextDay();  // person 1 goes to next day
    fb1.walk(3.1);  // person 1 walks 3.1 miles
    fb1.walk(2.8);  // person 1 walks another 2.8 miles
    fb1.nextDay();  // person 1 goes to next day
    fb1.walk(1.0);  // person 1 walks 1.0 miles
    fb1.walk(1.5);  // person 1 walks another 1.5 miles

    fb2.walk(3.5);  // person 2 walks 3.5 miles
    fb2.walk(2.8);  // person 2 walks another 2.8 miles
    fb2.nextDay();  // person 2 goes to next day
    fb2.walk(2.2);  // person 2 walks 2.2 miles
    fb2.walk(1.6);  // person 2 walks another 1.6 miles
    fb2.nextDay();  // person 2 goes to next day
    fb2.walk(4.0);  // person 2 walks 4.0 miles
    fb2.walk(3.3);  // person 2 walks another 3.3 miles

    // Call each of the five "get_____" methods to get and print out information about each FitByte's exercise session for the week
    cout << "FitByte 1 walked " << fb1.getDaysWalked() << " days this week." << endl;
    for (int i = 1; i <= 7; i++) {
        float dist = fb1.getDistanceByDay(i);
        float cal = fb1.getCaloriesByDay(i);
        if (dist > 0) {
            cout << "Day " << i << ": walked " << dist << " miles and burned " << cal << " calories." << endl;
        }
    }
    cout << "Total distance walked for FitByte 1: " << fb1.getWeekDistance() << " miles" << endl;
    cout << "Total calories burned for FitByte 1: " << fb1.getWeekCalories() << " calories" << endl;

    cout << endl; // add a blank line for formatting

    cout << "FitByte 2 walked " << fb2.getDaysWalked() << " days this week." << endl;
    for (int i = 1; i <= 7; i++) {
        float dist = fb2.getDistanceByDay(i);
        float cal = fb2.getCaloriesByDay(i);
        if (dist > 0) {
            cout << "Day " << i << ": walked " << dist << " miles and burned " << cal << " calories." << endl;
        }
    }
    cout << "Total distance walked for FitByte 2: " << fb2.getWeekDistance() << " miles" << endl;
    cout << "Total calories burned for FitByte 2: " << fb2.get
