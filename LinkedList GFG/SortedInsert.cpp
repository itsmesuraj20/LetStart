#include<bits/stdc++.h>
using namespace std;

class Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};
ds;flksd

Node * sortInsert(Node * head , int target){
    Node * temp = new Node(target);
    if(head ==NULL);
    {
        head = temp;
        temp->next = NULL;

        return temp;
    }

    Node * curr = head;
    while(curr!= NULL){
        if(curr->data <target){
            
        }
    }

}

int main(){
    Node * head = new Node(10);
    head ->next = new Node(20);
    head ->next->next = new Node(30);
    head ->next ->next->next = new Node(40);

    int x;
    cin>>x;


    head = sortInsert(head,x);


    while(head != NULL){
        cout<<head ->data <<" ";
        head = head ->next;
    }

    return 0;
}