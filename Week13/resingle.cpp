#include <iostream>

struct Node{
    int data;
    Node *next;

    Node(int x){
        data = x;
        next = nullptr;
    }
};

void PrintList_for(Node *head){ 
    
    for(Node *tmp = head ; tmp != nullptr ; tmp = tmp->next){
        std::cout <<  tmp->data << " -> ";
    }
    std::cout << "nullptr" << std::endl;
}

int main(){

    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40); 
    a->next = b;
    b->next = c;
    c->next = d;

    PrintList_for(a);
}