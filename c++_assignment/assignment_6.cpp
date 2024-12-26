/* Program to form a stack structure from array and perform
different operations like push, pop, view top element on it */

#include <iostream>
using namespace std;

class Stack {
private:
        int* array;  // Array to hold stack elements
        int top;     // Index of the top element in the stack
        int capacity; // Maximum capacity of the stack

public:
        // Constructor to initialize the stack
        Stack(int size) {
                capacity = size;
                array = new int[capacity];
                top = -1;  // Initially stack is empty
        }

        // Destructor to free memory
        ~Stack() {
                delete[] array;
        }

        // Function to add an element to the stack (push)
        void push(int value) {
                if (top == capacity - 1) {
                        cout << "Stack Overflow! Cannot push " << value << endl;
                } else {
                        array[++top] = value; // Increment top and insert value
                        cout << "Pushed: " << value << endl;
                }
        }

        // Function to remove the top element from the stack (pop)
        int pop() {
                if (top == -1) {
                        cout << "Stack Underflow! Cannot pop" << endl;
                        return -1;// Return -1 if stack is empty
                } else {
                        int popped_value = array[top--];// Return value and decrement top
                        return popped_value;
                }
        }

        // Function to get the top element of the stack (peek)
        int print_top() {
                if (top == -1) {
                        cout << "Stack is empty" << endl;
                        return -1;
                } else {
                        return array[top];
                }
        }

        // Function to display the elements of the stack
        void display() {
                if (top == -1) {
                        cout << "Stack is empty" << endl;
                } else {
                        cout << "Stack elements: ";
                        for (int i = top; i >= 0; i--) {
                                cout << array[i] << " ";
                        }
                        cout << endl;
                }
        }
};

int main() {
        Stack stack(5);  // To create a stack
        // To push elements into the stack
        stack.push(10);
        stack.push(20);
        stack.push(30);
        stack.push(40);
        stack.push(50);
        // Stack overflow
        stack.push(60);
        // Display the stack
        stack.display();
        // Pop elements from the stack
        cout <<"Pop: " << stack.pop() << endl;
        cout <<"Pop: " << stack.pop() << endl;
        // Peek the top element of the stack
        cout << "Top element: " << stack.print_top() << endl;
        // Display the stack after popping some elements
        stack.display();
        return 0;
}

