#include <iostream>
long long ary[160];
int is_user=0;
int is_admin=0;
int main(){ 
  long long i,x;
  //std::cout << &*(ary + 160) << std::endl;
  //std::cout << &is_user << std::endl;
  //std::cout << &is_admin << std::endl;
  std::cin >> i >> x;
  ary[i] = x; 
  if(is_admin == 1){
    std::cout << "Why Peipei is so dian?\n";
  }
}