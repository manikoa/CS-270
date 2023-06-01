#ifndef STACK_HDR
#define STACK_HDR

// Define symbolic constant for maximum capacity of the stack.
#define MAX_SIZE    20

// Define template parameter T
template<typename T>
class Stack
{
private:
    T elements[MAX_SIZE];
    int top; // index of the current top element.

public:
    // Default constructor
    // Initializes the stack to empty.
    Stack() {
        this->top = 0;
    }

    // isEmpty
    // Pre-condition: None.
    // Post-condition: Returns true if the stack is empty; else, false.
    bool isEmpty() const {
        return this->top <= 0;
    }

    // isFull
    // Pre-condition: None.
    // Post-condition: Returns true if the stack is full; else, false.
    bool isFull() const {
        return this->top >= MAX_SIZE;
    }

    // push
    // Pre-condition: Receives a value of type T to insert at the top of the stack.
    // Post-condition: If the stack is not full, inserts the value at the top and returns true;
    // otherwise, returns false.
    bool push(T value) {
        if (!this->isFull()) {
            this->elements[this->top] = value;
            this->top++;
            return true;
        }
        else
            return false;
    }

    // pop
    // Pre-condition: None.
    // Post-condition: If the stack is not empty, removes the value from the top and returns it;
    // otherwise, returns a default value of type T to signify an empty stack.
    T pop() {
        if (this->isEmpty())
            return T(); // A return value of the default-constructed T signifies an empty stack.
        else {
            this->top--;
            T valueToReturn = this->elements[this->top];
            return valueToReturn;
        }
    }
};

#endif
