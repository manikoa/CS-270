// Main.cpp - Main CPP file to demonstrate button class
#include <iostream>
#include "Button.h" // Include the Button header file.
#include "Button.cpp" // Include the Button implementation file. This is generally not needed.

int main() {
    // Create a button object with label "Click me", width 100, and height 50
    Button button("Click me", 100, 50);
    // Simulate a button click
    button.click();
    return 0;
}
