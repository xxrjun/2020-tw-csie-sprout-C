#include <iostream>
#include <vector>

int main(){
    using namespace std;
     	
    vector<int> v;
    cout << v.size() << ' ' << v.capacity() << endl;
    // 0 0
    for (int i = 0; i < 10; i++) {
        v.push_back(i);
        cout << v.capacity() << ' '; //依據使用情形自動分配新的空間(通常為兩倍)
    }
       
}