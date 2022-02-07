#include <iostream>
#include <math.h>

using namespace std;
int main(){
    
    int input_n, input_k;

    cin >> input_n >> input_k;
    char color[8] = {'R', 'O', 'Y', 'G', 'B', 'I', 'V'};

    char s[3001] = {};
    int length = input_n;
    int now_day = 0;
    int total_days;

    if(input_n == 0){
        total_days = 1;
    }
    else{
        total_days = pow(input_n, 1.0/3) + 1;
    }

    //fill with 'W'
    for(int i = 0 ; i < input_n; i++){
        s[i] = {'W'};
    }

    char last_color;

    for(int i = 0 ; i < total_days - 1; i++){
        int times = pow(2,i);
        char now_color = color[(input_k + i - 1) % 7];
        int count = 0;
    
        for(int y = 0; y < times ; y++){
            //set count to flag
            while(s[count] != 'W'){
                count ++;                 
            }
            int flag = count;
            int end = flag;
            
            //set end
            while(s[end] == 'W'){
                end ++; 
            }
            count = end;
            end--;
            
            //cout << "flag: " << flag << endl;
            //cout << "end: " << end << endl;
            //cout << "----"<< endl;
        
            int draw_length = (end - flag + 1) / 3;
            if(draw_length < 1){
                draw_length = 1;
            }
            //cout << "draw: " << draw_length << endl;
            for(int x = 0 ; x < draw_length ; x++){
                s[flag + draw_length + x] = now_color;
            }
        }
        last_color = color[(input_k + i) % 7];
    }

    //draw last O(n)
    for(int i = 0 ; i < input_n; i++){
        if(s[i] == 'W' && input_n > 1)
            s[i] = last_color;
        else if (input_n == 1)
            s[i] = color[(input_k - 1) % 7];
    }

    //print array O(n)
    for(int i = 0 ; i < input_n ; i ++){
        cout << s[i];
    }
    cout << endl;
}