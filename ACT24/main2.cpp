#include <iostream>
#include "Stack.h"
using namespace std;

int main() {
    cout << "Stack Demo" << endl;

    // Create a templated Stack for integers
    Stack<int> S; // Create a Stack of integers
    cout << "Inserting into Stack: 1, 2, 3." << endl;
    S.push(1);
    S.push(2);
    S.push(3);

    cout << "Removing from Stack..." << endl;
    while (!S.isEmpty()) {
        cout << S.pop() << " ";
    }
    cout << endl;

    // With the template finished, you can now create different types of stacks
    // using the same template class.

    // Create a Stack of characters
    Stack<char> charStack;
    cout << "Inserting into Char Stack: 'A', 'B', 'C'." << endl;
    charStack.push('A');
    charStack.push('B');
    charStack.push('C');

    cout << "Removing from Char Stack..." << endl;
    while (!charStack.isEmpty()) {
        cout << charStack.pop() << " ";
    }
    cout << endl;

    // Create a Stack of strings
    Stack<std::string> stringStack;
    cout << "Inserting into String Stack: 'Hello', 'World'." << endl;
    stringStack.push("Hello");
    stringStack.push("World");

    cout << "Removing from String Stack..." << endl;
    while (!stringStack.isEmpty()) {
        cout << stringStack.pop() << " ";
    }
    cout << endl;

    return 0;
}
