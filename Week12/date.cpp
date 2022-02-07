#include <iostream>
#include <string>
#include <sstream>

int main(){
    using namespace std;

    string a = "2021/6/19";
    stringstream ss;
    ss << a;

    int year, month, day;
    char c;
    ss >> year >> c >> month >> c >> day;

    cout << "year = " << year << endl;
    cout << "month = " << month << endl;
    cout << "day = " << day << endl; 
}