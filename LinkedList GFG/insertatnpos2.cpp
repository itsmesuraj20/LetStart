#include<bits/stdc++.h>

using namespace std;

class Node {
  public: 
  int data;
  Node * next;
  Node(double x) {
    data = x;
    next = NULL;
  }
};

Node * insertat(Node * head, int pos, double data) {
  Node * temp = new Node(data);

  if (pos == 1) {
    temp -> next = head;
    return temp;
  }

  Node * curr = head;
  for (int i = 1; i < pos - 2 && curr != NULL; i++) {
    curr = curr -> next;
  }
  if (curr == NULL) {
    return head;
  }

  temp -> next = curr -> next;
  curr -> next = temp;

  return head;

}
int main() {
  Node * head = new Node(1);
  head -> next = new Node(2);
  head -> next -> next = new Node(3);
  head -> next -> next -> next = new Node(4);

  head = insertat(head, 4, 3.5);

  while (head != NULL) {
    cout << head -> data << " ";
    head = head -> next;
  }
  return 0;
}