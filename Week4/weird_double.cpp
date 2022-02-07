#include <iostream>
#include <cmath>

int main(){

    using namespace std;

    double a = sqrt(-1.0);
    cout << a << endl;
    //output: nan (not a number)

    double b = 2.0 / 0.0;
    cout << b <<endl;
    //output: inf (infinite)

    cout << 123456789.1234 << endl; //1.234567e + 008
    cout << 0.0000000000123 <<endl; //1.23e -015
}