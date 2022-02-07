#include <iostream>
#include <string>
using namespace std;

struct Container {
    int index; // 貨櫃編號
    int weight; // 貨櫃重量
    Container *next;
};
Container* insert(Container* head, int index, int weight);
Container* remove(Container* head, int max_weight);

// your code will be put here
Container* insert(Container* head, int index, int weight) {
    Container* c = new Container(); c->index = index; c->weight = weight; c->next = NULL;
    Container* cur = head, * prev = NULL;
    while (cur != NULL && cur->index < index)
    {
        prev = cur;
        cur = cur->next;
    }
    if (prev == NULL)
    {
        c->next = cur;
        return c;
    }
    else
    {
        c->next = cur;
        prev->next = c;
    }
    return head;
}
Container* remove(Container* head, int max_weight) {
    Container* cur = head, * prev = NULL;
    while (cur != NULL && cur->weight != max_weight)
    {
        prev = cur;
        cur = cur->next;
    }
    if (cur == NULL)return head;
    else if (prev == NULL)
    {
        prev = cur->next;
        delete cur;
        return prev;
    }
    else
    {
        prev->next = cur->next;
        delete cur;
        return head;
    }
}
int main() {

    Container *head = nullptr;
    int N;
    cin>>N;
    while (N--) {
        string cmd;
        cin >> cmd;
        if (cmd == "insert") {
            int index, weight;
            cin >> index >> weight;
            head = insert(head, index, weight);
        } else if (cmd == "remove") {
            int max_weight;
            cin >> max_weight;
            head = remove(head, max_weight);
        }
    }

    // list all
    Container *cur = head;
    while (cur!=nullptr) {
        cout << cur->index << " " << cur->weight << endl;
        cur = cur->next;
    }

}