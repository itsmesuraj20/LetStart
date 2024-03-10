#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* insertAtEnd(Node* head, Node* newNodeX) {
    if (head == NULL) {
        return newNodeX;
    }

    Node* curr = head;

    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = newNodeX;
    newNodeX->next = NULL;

    return head;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    Node* newNode = new Node(40);
    head = insertAtEnd(head, newNode);

    // Print the linked list
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
