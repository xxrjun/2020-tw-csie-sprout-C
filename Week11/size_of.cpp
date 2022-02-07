#include <iostream>

int main(){
    using namespace std;

    int a = 5;
    long b = 5;
    long long c = 5;

    int *d = &a;
    long *e = &b;

    cout << "sizeof(int): " << sizeof(a) << endl;
    cout << "sizeof(long): " << sizeof(b) << endl;
    cout << "sizeof(long long): " << sizeof(c) << endl;
    cout << "sizeof(int*): " << sizeof(*d) << endl;
    cout << "sizeof(long*): " << sizeof(*e) << endl;

}