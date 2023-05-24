// Button.cpp - Source implementation file for button class
#include "Button.h"
#include <iostream>

// Constructor for Button class
Button::Button(const std::string& label, int width, int height)
    : m_label(label), m_width(width), m_height(height)
{}

// Function to simulate a button click
void Button::click() const {
    std::cout << "Button '" << m_label << "' clicked!" << std::endl;
}