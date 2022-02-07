#include <iostream>
#include <cString>
#include <unistd.h>

using namespace std;
int main(){
    char A[] = "ABCD    ";
    char B[] = " ABCD   ";
    cout << A ;
    usleep(300000);
    cout << '\r';
    cout << B ;

    char S[] = {"12345678"};
    int start = 0;
    int S_length = strlen(S);
    cout << S_length << endl;

    for(int x = 0 ; x < 2 ; x++){
            cout << "\r" ;
            for(int i = start, j = 0 ; j < S_length ; i++ ,j++){
                    cout << S[i % S_length];
            }
            start++;
            usleep(300000);
    }

    
}