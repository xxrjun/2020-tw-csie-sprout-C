#include <iostream>

int main(){

    using namespace std;

    int input;

    cout << "Input a number of month: ";
    cin >> input;
    while(input > 12 || input < 1){
        cout <<"Invalid input!" << endl << "Please input between 1 ~ 12: ";
        cin >> input;
    }
    if(input >= 1 && input <= 3){
        cout << "Spring" << endl;
    }
    else if (input >= 4 && input <= 6){
        cout << "Summer" << endl;
    }
    else if (input >= 7 && input <= 9){
        cout << "Fall" << endl;
    }
    else if (input >= 10 && input <= 12){
        cout << "Winter" << endl;
    }

    return 0;
}