#include <iostream>
#include "UndoStack.h"

using namespace std;

int main() {
    UndoStack stack;

    // Test case: Reversing a sequence of numbers
    // We'll push the numbers 2, 5, 3, 8 into the stack
    // and then pop them out in reverse order to undo or backtrack the sequence.
    // We'll interpret the popped out value as the number to be undone.

    cout << "Pushing values onto stack: " << endl;
    stack.push(2);
    cout << "Pushed 2 onto stack." << endl;
    stack.push(5);
    cout << "Pushed 5 onto stack." << endl;
    stack.push(3);
    cout << "Pushed 3 onto stack." << endl;
    stack.push(8);
    cout << "Pushed 8 onto stack." << endl;

    cout << "Undoing values in reverse order: " << endl;
    while (!stack.isEmpty()) {
        int value = stack.pop();
        if (value == 2) {
            // If the value is 2, we'll break the loop and exit the program
            cout << "Undo operation stopped at value 2." << endl;
            break;
        }
        cout << "Undoing value: " << value << endl;
        // Perform the undo operation corresponding to the value
        // ...
        // Add your code here to perform the undo operation based on the popped value
    }

    return 0;
}
