#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() {
    head = nullptr;
}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

void LinkedList::insertFront(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void LinkedList::insertBack(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = nullptr;
    if (head == nullptr) {
        head = newNode;
    }
    else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void LinkedList::insertAfter(int key, int data) {
    Node* current = head;
    while (current != nullptr && current->data != key) {
        current = current->next;
    }
    if (current != nullptr) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = current->next;
        current->next = newNode;
    }
    else {
        std::cout << "Key not found" << std::endl;
    }
}

void LinkedList::deleteNode(int key) {
    if (head == nullptr) {
        return;
    }
    if (head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* current = head;
    while (current->next != nullptr && current->next->data != key) {
        current = current->next;
    }
    if (current->next != nullptr) {
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}

void LinkedList::displayList() {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}
