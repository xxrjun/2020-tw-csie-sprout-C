#include <iostream>
#include <stack>

int main(){
    using namespace std;
    stack <int> sta;
    for(int i = 0 ; i < 10 ; i++){
        sta.push(i);
    }
    while (!sta.empty()){
        cout << sta.top() << ' ';
        sta.pop();
    }
}