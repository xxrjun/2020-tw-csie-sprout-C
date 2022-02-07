#include <iostream>

int main(){

    using namespace std;

    char S[] = "appleeee\rbanana";
    std::cout << S << std::endl;
    //bananaee

    char S2[] = "12345678\r00000";
    std::cout << S2 << std::endl;
    //00000678
  
}

