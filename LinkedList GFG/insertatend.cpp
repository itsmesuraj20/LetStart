//14 FEB 2024

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next ;
    Node(int x){
        data = x;
        next =NULL;
    }
};

Node *insertatEnd(Node *head,int x){
    Node *temp = new Node(x);
    if(head == NULL){
        return temp;
    }
    Node *curr = head; //Saari List isme aa gyi 
    while(curr ->next!=NULL){ //curr ->next null nhi honi chahiye
        curr = curr->next;
    }

    curr -> next = temp;
    return head; //Return head of the list
}

void printList(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data <<" ";
        curr = curr ->next;
    }
    cout<<endl;
}

int main(){

    Node *head = NULL;
    head = insertatEnd(head ,10);
    head = insertatEnd(head,20);
    head = insertatEnd(head,30);

    printList(head);
    
    return 0;
}