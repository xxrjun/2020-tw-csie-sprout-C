#include <iostream>
#include <cstdlib> // 不要忘記
#include <ctime>
int main(){
    srand (10000); //set random seed as 10000
    srand(time(NULL)); //use time better than first one , but still not accurate
    for(int i=0; i<10; i++)
        std::cout << rand() % 1000 << std::endl;
}