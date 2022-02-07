#include <iostream>
#include <cstring>

int main(){
    
    using namespace std;

    char a[] = "dirty stuff";
    char b[12];

    memcpy(b, a, min(sizeof(a), sizeof(b)) - 1); //-1 cause the last char is '\n'
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    memset(a, 'a', sizeof(a) - 1);//把 a 設成 "aaaaaaaa"
    cout << "a after set: " << a << endl;
}