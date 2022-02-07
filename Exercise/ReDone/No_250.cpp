#include <iostream>
struct Node {
    int data;
    Node* next;
};
Node* head;
void print_list();
void push_front(int data);
void pop_front();

void push_front(int data){
    
}

void pop_front(){
  
}

int main() {
    head = NULL;
    for (int i = 0; i < 5; i++) {
        push_front(i);
    }
    print_list();
    for (int i = 0; i < 5; i++) {
        pop_front();
    }
    print_list();
    for (int i = -5; i < 0; i++) {
        push_front(i);
    }
    print_list();
    for (int i = 0; i < 4; i++) {
        pop_front();
    }
    print_list();
}

void print_list() {
    Node* tmp = head;
    if (head != NULL)
        std::cout << "head ->\n";
    else
        std::cout << "empty\n";
    while(tmp != NULL) {
        std::cout << tmp->data << std::endl;
        tmp = tmp->next;
    }
}