#include <bits/stdc++.h>
using namespace std;

// Define the Node class
class Node {
public:
    int data;
    Node* next;

    // Constructor
    Node(int val) : data(val), next(nullptr) {}
};

// Function to insert a node at a specific position
Node* insertPos(Node* head, int pos, int data) {
    Node* temp = new Node(data);

    if (pos == 1) {
        temp->next = head;
        return temp;
    }

    Node* curr = head;
    for (int i = 1; i < pos - 1 && curr != nullptr; i++) {
        curr = curr->next;
    }

    if (curr == nullptr)
        return head;

    temp->next = curr->next;
    curr->next = temp;

    return head;
}

int main() {
    // Create a linked list node
    Node* head = new Node(1);

    // Insert nodes at different positions
    head = insertPos(head, 1, 2);
    head = insertPos(head, 2, 3);
    head = insertPos(head, 2, 4);
    head = insertPos(head,)

    // Display the linked list
    Node* curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }

    return 0;
}
