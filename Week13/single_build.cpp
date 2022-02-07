#include <iostream>

struct Node {
    int data;
    Node *next;

    Node (int x) {
        data = x;
        next = nullptr;
    }
};

Node *BuildList(int n, int arr[]) {
    Node *head = new Node(arr[0]);

    Node *tmp = head; // when add arr[i], tmp is the (i-1)-th node
    for (int i = 1; i < n; i++) {
        Node *newNextNode = new Node(arr[i]);
        tmp->next = newNextNode;
        tmp = tmp->next;
    }
    return head;
}

void PrintList(Node *head) {
    for (Node *tmp = head; tmp != nullptr; tmp = tmp->next) {
        std::cout << tmp->data << "->";
    }
    std::cout << "nullptr" << std::endl;
}

int main() {
    int arr[4] = {10, 20, 30, 40};
    Node *head = BuildList(4, arr);

    PrintList(head);
}