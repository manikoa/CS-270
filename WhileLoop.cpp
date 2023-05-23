/* pair programmingg by Maniko activity1 */

#include <iostream>
using namespace std;

int main() {
    double temps[5] = {32.1, 19.7, 32.0, 33.3, 31.99};
    int index = 0;
    int numFreezingDays = 0;

    while (index < 5) {
        if (temps[index] <= 32) {
            numFreezingDays = numFreezingDays + 1;
        }

        index = index + 1;
    }

    cout << "Number of freezing days is " << numFreezingDays << endl;

    // Activity 2
    index = 0;
    int coldestIndex = 0;
    double coldest = temps[coldestIndex];

    while (index < 5) {
        if (temps[index] <= coldest) {
            coldest = temps[index];
            coldestIndex = index;
        }

        index = index + 1;
    }

    cout << "The coldest temperature is " << coldest << endl;

    return 0;
}
