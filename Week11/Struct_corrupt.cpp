	
#include <iostream>
#include <cstring>
struct person{
  char name[16];
  int is_admin;
};
int main(){
  char tmp[16];
  struct person peipei;
  peipei.is_admin = 0;
  std::cin >> tmp ;
  strcpy(peipei.name,tmp);
  std::cout << "Hi! " << tmp << std::endl;
  if(peipei.is_admin){
    std::cout << "Wow! Peipei is so Dian!" << std::endl;
  }
}