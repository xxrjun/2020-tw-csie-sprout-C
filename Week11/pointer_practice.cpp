#include <iostream>

int main(){
    using namespace std;

    int x = 777;
    int *a = &x;
    int **b = &a;
    int &z = x;

    cout << "&x: " << &x << endl;
    cout << "*&x: " << *&x << endl;
    cout << "&*&x: " << &*&x << endl; 
    cout << "*&*&x: " << *&*&x << endl; //i don't know
    //cout << "*(int *)x: " << *(int *)x << endl;
    
    cout << "----------------------" << endl;
    z = 666;
    cout << "z = 666" << endl;
    cout << "x: " << x << endl;

    cout << endl;
    cout << "*a: " << *a << endl;
    cout << "&*a: " << &*a << endl;
    cout << "*b: " << *b << endl;
    cout << "**b: " << **b << endl;
}