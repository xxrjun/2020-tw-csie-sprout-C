#include <iostream>
#include <cstring>

int main(){

    using namespace std;

    char f[100];
    char l[99];
    char res[200] = {};

    int m = 0;
    int n = 0;

    
    cin >> f >> l;
    cin >> m >> n;

    strncpy(res, f, m);
    strncat(res, l, n);

    for(int i =0 ; i < 3; i++){
        cout << res << endl;
    }
}