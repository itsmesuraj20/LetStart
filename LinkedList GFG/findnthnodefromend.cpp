#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data ;
    Node *next = NULL;
    Node(int x){
        data = x;
        next = NULL;
    }
};

void throughLeng(Node *head ,int n){
    if(head ==NULL){ cout<<"Empty" ;
    return;
    }
    Node * curr = head;
    int len = 0;
    for(curr = head; curr!=NULL; curr = curr->next){
        len++;
    }

    if(n>len){
        cout<<"Invalid value of n" << endl;
        return ;
    }

    for(int i = 1 ; i<len - n +1;i++){
        curr = curr ->next;
    }
    cout<<curr->data <<" "; 
    return ;   
}

int main(){
    Node *head = new Node(10);
    head ->next = new Node(20);
    head ->next->next = new Node(30);
    head ->next->next->next = new Node(40);
    head ->next->next->next->next = new Node(50);

    int x;
    cout << "Enter the element from the back: ";
    cin >> x;
    cout << x;

    throughLeng(head,x);

    return 0;
}