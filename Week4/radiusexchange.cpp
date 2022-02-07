#include <iostream>
#include <iomanip>

int main(){

    using namespace std;

    int input_radian = 0;

    cin >> input_radian;
    
    double pi = 3.14159;
    double radian_measure = input_radian * 360 / (2*pi);
    cout << fixed << setprecision(4) << radian_measure << endl;
}