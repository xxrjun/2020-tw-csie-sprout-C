#include <iostream>

template<typename T1, typename T2>
struct pair{
    T1 first;
    T2 second;
};

template<typename T>
T min(T a, T b){
    if(a > b)
        return b;
    else if (a < b)
        return a;
    else
        return 0;
}

int main(){

    // min<int>(5,10) , <int> is not neessarily required
    // the function would determine the argument 
    std::cout << min(5,10) << std::endl;


    pair<int, double> x;
    x.first = 5;
    x.second = 10.2;
}