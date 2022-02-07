#include <iostream>

char *afterKSpaces(char *s, int k){
    while(k > 0 && s[0] != '\0'){
        if(s[0] == ' '){
            k -= 1;
        }
        s += 1;
    }

    return s;
}


int main(){
    using namespace std;

    char s[] = "may the force be with you.";
    int k = 3;

    cout << "Original: " << s << endl;
    cout << "After: " <<afterKSpaces(s, k) << endl;
}