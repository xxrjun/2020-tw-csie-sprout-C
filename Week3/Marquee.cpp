#include <iostream>
#include <unistd.h>
#include <cstring>

int main(){

        using namespace std;

        char S[] = {"Fighting! Fighting!                                           "};
        int start = 0;
        int S_length = strlen(S);
        //cout << S_length << endl;
       
        while(true){
                cout << "\r" ;
                for(int i = start, j = 0 ; j < S_length ; i++ ,j++){
                        cout << S[i % S_length];
                }//62 times ,j = 61 , i = start + 61
                start++;
                usleep(300000);
        }
}