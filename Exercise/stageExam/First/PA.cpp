#include <iostream>

int main(){
    using namespace std;

    int input_a = 0, input_b = 0;
    int input_x = 0, input_y = 0;
    int input_m = 0;
    int i, j;

    cin >> input_m >> input_a >> input_b >> input_x >> input_y;

    while(input_m > 60){
        input_a ++;
        input_m -= 60;
    }

    input_b += input_m;

    if(input_a > input_x){
        cout << "QQ";
    }
    else if(input_a == input_x && input_b > input_y){
        cout << "QQ";
    }
    else{
        cout << input_a << " " << input_b << endl;
    }
}