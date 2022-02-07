#include <iostream>

int a = 42;

void weird(int* &ptr) {
    if (ptr == nullptr || *ptr == 0)
        ptr = &a;
}

int main() {
    int x = 3, y = 0;
    int *ptrx = &x, *ptry = &y, *ptrz = nullptr;

    std::cout << ptrx << "->" << *ptrx << std::endl;
    std::cout << ptry << "->" << *ptry << std::endl;

    std::cout << &ptrx << "->" << ptrx << std::endl;
    std::cout << &ptry << "->" << ptry << std::endl;
    std::cout << &ptrz << "->" << ptrz << std::endl;

    std::cout << "------" << std::endl;

    weird(ptrx);
    std::cout << ptrx << "->" << *ptrx << std::endl;

    weird(ptry);
    std::cout << ptry << "->" << *ptry << std::endl;

    weird(ptrz);
    std::cout << ptrz << "->" << *ptrz << std::endl;
}
