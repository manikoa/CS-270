#include "Pair.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
  
  // Pair of char values for my initials
  Pair<char> initials('W', 'B');
  cout << "Instructor's initials are " << initials.first() << "." << initials.second() << "." << endl;

  //--- PART 1. TO-COMPLETE
  // Create at least two Pairs to share fun facts about yourself,
  // your pets, or something that you enjoy doing for fun.
  // Use the constructor to specify the two values for each Pair.

  Pair<string> facts("I love hiking", "I have two cats");
  cout << "Fun facts: " << facts.first() << ". " << facts.second() << "." << endl;

  Pair<int> numbers(42, 17);
  cout << "Numbers: " << numbers.first() << ", " << numbers.second() << endl;

  //--- PART 2. TO-COMPLETE --- EXPERIMENT --- OBSERVE
  // Create pairs of type char, int, double, etc.
  // For each of these Pairs do not type the ()s nor provide any values.
  // Have each pair print its first and second values.
  // What default values were assigned for each Pair you tested?

  Pair<char> defaultCharPair;
  cout << "Default char values: " << defaultCharPair.first() << ", " << defaultCharPair.second() << endl;

  Pair<int> defaultIntPair;
  cout << "Default int values: " << defaultIntPair.first() << ", " << defaultIntPair.second() << endl;

  Pair<double> defaultDoublePair;
  cout << "Default double values: " << defaultDoublePair.first() << ", " << defaultDoublePair.second() << endl;

  //--- PART 3. QUESTION TO PONDER.
  // Why do you think the default values observed in PART TWO behaved this way?

  // The default values observed in PART TWO are a result of the default constructors defined for each type.
  // When a Pair object is created without providing any values, the default constructor is called.
  // In C++, the default initialization of fundamental types like char, int, and double results in indeterminate values.
  // These values are not guaranteed to be zero or any other specific value.
  // Hence, when printing the default values, you may observe random or garbage values.
  
  return 0;
}
