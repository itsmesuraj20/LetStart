#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node * next;
    Node(int x){
        data = x;
        next =NULL;
    }
};


void middles(Node *head){
    if(head == NULL) cout<<"Empty"<<endl;
    
    Node * curr = head;
    int count{0};

    for(curr = head ; curr!=NULL ; curr = curr->next){
        count++;
    }
    curr = head;
    for(int i = 0 ;i<count/2;i++){
        curr=curr->next;
    }

    cout<<curr->data;
}

int main(){

    Node *head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node (30);
    head -> next ->next ->next = new Node(40);
    head -> next ->next ->next->next = new Node(50);
    head -> next->next->next->next->next = new Node(60);
    
    middles(head);

    return 0;
}