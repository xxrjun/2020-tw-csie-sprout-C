/* strchr example */
#include <stdio.h>
#include <string.h>
#include <iostream>

int main ()
{   
    using namespace std;

    const char text[] = "a234512345abcabc";
    string pattern;
    int i = 0;
    int index[100];

    cout << "text: " << text << endl;
    cout << "pattern: ";
    cin >> pattern;

    const char *loc  = strchr(text, *pattern.c_str());
    index[i++] = loc - text;
    while(loc != NULL){
        cout << endl;
        cout << "Founnd at (loc - text): " << loc - text << endl;
        cout << "text: " << text << endl;
        cout << "*text: " << *text << endl;
        cout << "pattern.c_str(): " << pattern.c_str() << endl;
        cout << "*pattern.c_str(): " << *pattern.c_str() << endl;
        cout << "loc: " << loc << endl;
        cout << "*loc: " << *loc << endl;
        cout << "loc + 1: " << loc + 1 << endl;
        cout << "Founnd at (*loc - *text): " << *loc - *text << endl;
        cout << endl;
        loc = strchr(loc + 1, *pattern.c_str());
    }



    return 0;
}