#include <iostream>
#include <cstdlib> //abs
#include <algorithm> //max, min

int main(){

    using namespace std;
    int a = -5;
    int b = 5;

    cout << "abs(-5): " << abs(a) << endl;
    cout << "max(-5,5): " << max(a, b) << endl;

}


//忘了就自己寫
int abs(int x){
    if(x < 0){
        return -x;
    }
    else{
        return x;
    }
}

//自己寫
int max(int a, int b){
    if(a < b){
        return b;
    }
    else{
        return a;
    }
}

