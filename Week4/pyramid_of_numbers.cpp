#include <iostream>

int main(){
        
        using namespace std;
        
        int input = 0;
        int i = 1;
        int count_Num = 0;
        
        cout <<"Input number from 1 ~9: ";
        cin >> input;
        while(input < 1 || input > 9){
            cout <<"Input number from 1 ~9: ";
            cin >> input;
        }
        while(i <= input){
            
            for(int n = 0 ; n < (input - i) ; n++){
                cout << " ";
            }
            for(int count_Num = 0 ; count_Num < i ; count_Num++){
                cout << i ;
            }
            cout << " ";
            for(int count_Num = 0 ; count_Num < i ; count_Num++){
                cout << i ;
            }
            cout << endl;

            i++;
        }
}