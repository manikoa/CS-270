#ifndef UNDOSTACK_H
#define UNDOSTACK_H

class UndoStack {
public:
    // Constructor - Initializes the stack
    UndoStack();

    // Pushes a value onto the stack
    bool push(int value);

    // Pops and returns the top value from the stack
    int pop();

    // Checks if the stack is full
    bool isFull() const;

    // Checks if the stack is empty
    bool isEmpty() const;

private:
    static const int capacity = 100;  // Capacity of the stack
    int data[capacity];               // The actual stack data
    int top;                          // Index of the top of the stack
};

#endif  // UNDOSTACK_H
