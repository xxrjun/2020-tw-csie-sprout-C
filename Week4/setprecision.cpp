#include <iostream>
#include <iomanip>

int main(){
    
    using namespace std;

    double a = 123.4567899527;

    cout << a << endl; //123.457
    cout.precision(10);
    cout << a << endl;
    cout << fixed << setprecision(8) << a << endl; 

    
}