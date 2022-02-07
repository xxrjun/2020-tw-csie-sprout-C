#include <iostream>
#include <iomanip>
#include <cmath>
int main(){
    //std::cout << setprecision(16) << std::endl; // 設定 cout 位數 
    std::cout << cos(acos(0.5)) << std::endl;// .49999999999999989
    std::cout << (0.5 == cos(acos(0.5))) << std::endl; // 0
}