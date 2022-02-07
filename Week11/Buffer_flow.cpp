	
#include <iostream>
int ary[150];
//int a = 0;
int is_admin = 0;
int main(){
    using namespace std;

    int i,x;
    //cout << &*(ary + 149) << endl;
    //cout << &a << endl;
    //cout << &is_admin << endl;
    std::cin >> i >> x;
    ary[i] = x;
    
    if(is_admin){
        std::cout << "How did you do that?\n";
    }
}