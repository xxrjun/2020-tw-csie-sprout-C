#include <iostream>

int main(){
    using namespace std;

    int x = 5;
    int *y = &x;
    


    cout << "x: " << x << endl; // 5
    cout << "y: " << y << endl; // 0x61feb8
    cout << "*y: " << *y << endl; // 5
    cout << "&y: " << &y << endl; // 0x61feb4
    cout << "*&y: " << *&y << endl; // 0x61feb8
    cout << endl;

    y = new int(8); // 不再指向 x 而是Heap的記憶體位置
    cout << "y = new int(8)" << endl;
    int **z = &y;
    cout << "*z: " << *z << endl;
    cout << "**z: " << **z << endl;
    cout << endl;

    **z = 10;
    cout << "**z = 10 " << endl;
    cout << "*y: " << *y << endl;
   
}