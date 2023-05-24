// Button.h - Header file for button class
#ifndef BUTTON_H
#define BUTTON_H

#include <string>

// The Button class represents a button that can be clicked
class Button {
public:
    Button(const std::string& label, int width, int height); // Constructor to create a button with a label, width, and height
    void click() const; // Function to simulate a button click
private:
    std::string m_label; // Label of the button
    int m_width; // Width of the button
    int m_height; // Height of the button
};

#endif

