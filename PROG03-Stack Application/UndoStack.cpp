#include "UndoStack.h"

// Constructor - Initializes the stack to empty
UndoStack::UndoStack() {
    for (int i = 0; i < capacity; i++) {
        data[i] = 0; // Initialize all elements to 0
    }
    topIndex = -1; // Stack is initially empty, so topIndex is set to -1
}

// Pushes a value onto the stack
bool UndoStack::push(int value) {
    if (isFull()) {
        return false; // Stack is full, unable to push more values
    }
    topIndex++;
    data[topIndex] = value;
    return true;
}

// Pops and returns the top value from the stack
int UndoStack::pop() {
    if (isEmpty()) {
        return 0; // Stack is empty, no value to pop
    }
    int value = data[topIndex];
    topIndex--;
    return value;
}

// Checks if the stack is full
bool UndoStack::isFull() const {
    return topIndex == capacity - 1; // Stack is full when topIndex is equal to capacity - 1
}

// Checks if the stack is empty
bool UndoStack::isEmpty() const {
    return topIndex == -1; // Stack is empty when topIndex is -1
}
