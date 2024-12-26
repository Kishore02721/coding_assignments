/*Program for creating a linked list from a array
  and using bubble sort on it */

#include <iostream>
using namespace std;

//Defining Node structure for the linked list
struct Node {
        int data;
        Node* next;        
        Node(int val) {
                data = val;
                next = nullptr;
        }     
};

// Function to add a new node to the linked list
void add_node(Node*& head, int data);
// Function to print the linked list
void print_linked_list(Node* head);
// Function to print the linked list
void print_linked_list(Node* head);
// Function to perform Bubble Sort on the linked list
void bubbleSort(Node* head);

int main() {
        Node* head = nullptr;  // Start with an empty list
        int array[] = {50, 34, 67, 2, 81, 46}; // Input array
        int array_size = sizeof(array) / sizeof(array[0]);
        // Create the linked list from the input array
        for (int i = 0; i < array_size; ++i) {
                add_node(head, array[i]);
        }
        cout << "Linked list before Bubble sort: ";
        print_linked_list(head);  // Print the list before sorting
        bubbleSort(head); // Perform bubble sort
        cout << "Linked list after Bubble sort: ";
        print_linked_list(head);  // Print the list after sorting
        return 0;
}

// Function to add a new node to the linked list
void add_node(Node*& head, int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
                head = newNode;
        } else {
                Node* temp = head;
                while (temp->next != nullptr) {
                        temp = temp->next;
                }
                temp->next = newNode;
        }
}

// Function to print the linked list
void print_linked_list(Node* head) {
        Node* temp = head;
        while (temp != nullptr) {
                cout << temp->data << " ";
                temp = temp->next;
        }
        cout << endl;
}

// Function to perform Bubble Sort on the linked list
void bubbleSort(Node* head) {
        if (head == nullptr || head->next == nullptr) {
                return; // No need to sort if the list is empty or has only one element
        }        
        bool swapped;
        do {
                swapped = false;
                Node* temp = head;
                while (temp != nullptr && temp->next != nullptr) {
                        if (temp->data > temp->next->data) {
                                // Swap the data between the nodes
                                swap(temp->data, temp->next->data);
                                swapped = true;
                        }
                        temp = temp->next;
                }
        } while (swapped);
}

