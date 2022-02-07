#include <iostream>
#include <cctype>
#include <cstring>

int main(){

    using namespace std;

    char str1[12] = "A123456  9";
    char str2[10] = "P4ssW0rd\n";

    cout << "str1[]: " << str1 << endl;
    cout << "\tisalpha [0]: "<< isalpha(str1[0]) << endl;
    cout << "\tisdigit [1]: "<< isdigit(str1[1]) << endl;
    cout << "\tisspace [9]: "<< isspace(str1[7]) << endl;
    cout << "--------------------------------" << endl;
    cout << "original str2[]: " << str2 ;
    str2[4] = tolower(str2[4]);
    cout << "After: " << str2 << endl;

    int C = atoi("100");
    cout << "C atoi \"100\": " << C << endl; 

    char myPass[9] = "pass";
    cout << "Original myPass: "<<myPass << endl;
    //strcat(myPass, myPass); cannot be executed
    strcat(myPass, "12345678");
    cout <<"myPass: " <<myPass << endl;
    cout <<"strlen(myPass): " << strlen(myPass) << endl;
    

}