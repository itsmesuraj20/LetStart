#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node *next ;
    Node(int x) : data(x), next(NULL){}
    /* 
    Node(int x)
    {
        data = x;
        next = NULL;
    }
    */
};

void printRecursively(Node *head){
    if(head == NULL){
        return ;
    }

    cout<<head->data<<" ";
    printRecursively(head->next);
}

int main(){

    Node *head = new Node(10);
    head ->next = new Node(20);
    head ->next->next = new Node(30);

    printRecursively(head);
    return 0;
}

//Recursively Printing the linkedlist  