#include <iostream>

int main(){

    using namespace std;
    
    int n = 0;
    
    while(cin >> n){
        if(n <= 0){
            break;
        }
        else if(n >= 1000){
            continue;
        }
        else if(n % 2 == 0){
            cout << "even" << endl;
        }
        else if (n % 2 != 0){
            cout << "odd" << endl;
        }
    }
        
}