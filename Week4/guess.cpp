#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){

    using namespace std;

    int Input = 0;
    int point = 0;
    int random = 0;
    srand(time(NULL));

    do{
        cout << "Input your nume (1 ~ 9, -1 to quit): ";
        cin >> Input;
        if(Input == -1){
            cout << "See you!" << endl;
            break;
        }
        random = rand() % 9 +1;
        cout << "Your number: " << Input << " Computer's number: " << random << endl;
        if(Input == random){
            cout << "You got 1 point!" << endl;
            point += 1;
        }
        else{
            cout << "Got wrong!" << endl;
        }
    }while(Input != -1);

    cout << "You got " << point << " !" << endl;
    
}