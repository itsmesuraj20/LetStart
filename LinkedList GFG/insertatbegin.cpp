#include<bits/stdc++.h>
using namespace std;

/*
 10 20 30
*/

struct Node{
    int data;
    Node* next;
    Node(int x): data(x),next(NULL){}
};

Node* insertBegin(Node *head,int x){
    Node* temp = new Node (x);
    temp ->next = head;
    return temp;
}


int main()
{

    return 0;

}