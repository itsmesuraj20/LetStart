#include<bits/stdc++.h>
using namespace std;
//Logic Build By Me
class Node{
    public:

    int data;
    Node * next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

int findLL(Node *head,int target){
    if(head == NULL) return -1;

    Node * curr = head;
    int c=0;
    while(curr!=NULL){
        if(curr->data == target){
            return c;
        }
        else{
           curr = curr->next;
           c += 1;
        }
    }

    return -1;
}

int main(){
    Node * head = new Node (10);
    head ->next = new Node(20);
    head ->next->next = new Node(30);
    head ->next->next->next = new Node(40);
    head ->next->next->next->next = new Node(50);

    int x;
    cout<<"Enter the value to be searched : "<<endl;
    cin>>x;

    cout<<findLL(head,x);

    return 0;
}