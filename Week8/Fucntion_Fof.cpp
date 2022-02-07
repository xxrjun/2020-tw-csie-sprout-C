#include <iostream>

int F(int x, int y){
    if(x < 1){
        return 1;
    }
    else{
        return F(x - y, y) + F(x - 2*y, y);
    }
}

int main(){
    using namespace std;

    cout << "F(5,2): " << F(5,2) << endl;
}