#include <iostream>

struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top; // Pointer to the top of the stack

public:
    Stack() {
        top = nullptr; // Initialize the stack as empty
    }

    // Push an element onto the stack
    void push(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = top;
        top = newNode;
    }

    int pop() {
        if (isEmpty()) {
            std::cerr << "Stack is empty. Cannot pop." << std::endl;
            return -1; // Return a default value
        }
        int value = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return value;
    }
    int peek() {
        if (isEmpty()) {
            std::cerr << "Stack is empty. Cannot peek." << std::endl;
            return -1; // Return a default value
        }
        return top->data;
    }

    bool isEmpty() {
        return top == nullptr;
    }
};

int main() {
    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << "Top element: " << stack.peek() << std::endl;

    while (!stack.isEmpty()) {
        std::cout << "Popped: " << stack.pop() << std::endl;
    }

    return 0;
}
