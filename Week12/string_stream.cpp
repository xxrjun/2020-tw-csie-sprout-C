#include <iostream>
#include <sstream>

int  main(){
    using namespace std;

    stringstream ss;
    int a = 1234;
    string b = "abcd";

    ss << a << b;

    string result;
    ss >> result;
    cout << result << endl;

}