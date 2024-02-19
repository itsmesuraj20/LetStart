//14Fevb,2024

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

Node *createList(){
    int data;
    Node *head = NULL;
    while(true){
        cout<<"Enter the data (-1 to stop): ";
        cin>>data;
        if(data==-1) break;
        Node *new_node = new Node(data);
        if(head==NULL){
            head = new_node;
        }
        else{
            Node *curr = head;
            while(curr->next!=NULL){
                curr = curr->next;
            }
            curr->next = new_node;
        }
    }
    return head;
}

void printList(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data <<" ";
        curr = curr->next;
    }
    cout<<endl;
}

int main(){
    Node *head = createList();
    printList(head);
    return 0;
}