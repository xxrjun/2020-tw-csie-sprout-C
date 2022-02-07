#include <stdio.h>
#include <string.h>
#include <iostream>


int main(void) {

    using namespace std;

    const char source[] = "1234512345abcabc";
    string search;
    int index[100];

    cout << "source: " << source << endl;

    cout << "Pattern: ";
    cin >> search;

    // 去除最後的換行字元
    //search[strlen(search) - 1] = '\0';

    const char *loc = strstr(source, search.c_str());


    while(loc != NULL){
        cout << "Found at index: " << loc - source << endl;
        loc = strstr(loc + 1, search.c_str());
    }

    return 0;
}