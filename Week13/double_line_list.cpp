#include <iostream>

struct node {
    int data;
    node *prev, *next; //分別指向前一格與後一格
};

void insert(node *prev_A, int data){
    node *cur = new node;
    cur->data = data;
    
    node *next_B = prev_A->next;
    //insert cur between prev and next

    prev_A->next = cur;
    cur->prev = prev_A;
    if(next_B != nullptr){
        prev_A->next = cur;
        cur->prev = prev_A;
        cur->next = next_B;
        next_B->prev = cur;

    }
}
void remove(node *ptr) {
    node *prev = ptr->prev, *next = ptr->next;

    delete ptr;

    if (prev != nullptr)
        prev->next = next;
    if (next != nullptr)
        next->prev = prev;
}