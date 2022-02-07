#include <iostream>
#include <limits>

int main(){
    int a = std::numeric_limits<int>::max();
    bool c = std::numeric_limits<double>::has_infinity;

    std::cout << c << std::endl;
}