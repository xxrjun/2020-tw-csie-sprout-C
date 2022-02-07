#include <iostream>

struct Node{
    int data;
    Node *next;

    Node(int x){
        data = x;
        next = nullptr;
    }
};

void PrintList_for(Node *head) {
    for (Node *tmp = head; tmp != nullptr; tmp = tmp->next) {
        std::cout << tmp->data << "->";
    }
    std::cout << "nullptr" << std::endl;
}

void PrintList_while(Node *head) {
    Node *tmp = head;
    while (true) {
        std::cout << tmp->data << "->";

        if (tmp->next == nullptr) {
            break;
        } else {
            tmp = tmp->next;
        }
    }
    std::cout << "nullptr" << std::endl;
}


int main(){
    std::cout << "Size of Node is " << sizeof(Node) << std::endl;

    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;

    PrintList_for(a);
    PrintList_while(a);
}
