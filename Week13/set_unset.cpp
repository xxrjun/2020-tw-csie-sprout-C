#include <iostream>

void set(int *&ptr1, int *&ptr2, int *&ptr3){
    // 新的 int
    ptr1 = new int;
    // 新的 int，建構參數為 33664888
    ptr2 = new int(33664888);
    // 新的 int 陣列，長度為 5 
    ptr3 = new int[5];
}

void unset(int *&ptr1, int *&ptr2, int *&ptr3){
    // 歸還 ptr1, ptr2 的位址
    delete ptr1;
    delete ptr2;
    // 歸還 ptr3 所拿到的陣列
    delete [] ptr3;
}
int main(){
    using namespace std;
    int *ptr1, *ptr2, *ptr3;
    set(ptr1, ptr2, ptr3);
    unset(ptr1, ptr2, ptr3);
}