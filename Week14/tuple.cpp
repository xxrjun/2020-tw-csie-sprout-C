	
#include <iostream>
#include <tuple>
using namespace std;
 
int main() {
    auto t = make_tuple(10, "john", 3.14); // 10 "john" 3.14
    int num;
    string name;
    double x;

    cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;

    tie(num, ignore, x) = t;
    cout << num << ' ' << x << endl;
    // 10 "john"

}