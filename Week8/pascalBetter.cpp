#include <iostream>

int mem[100][100];
bool visit[100][100];
int f(int n , int m){
    if(visit[n][m]){
        return mem[n][m];
    }
    else if(n == 1 || n == m){
        return 1;
    }
    else{
          mem[n][m] = f(n - 1, m -1 ) + f(n - 1, m);
        visit[n][m] == true;
        return mem[n][m];
    } 
}

int main(){
    using namespace std;

    cout << f(33,16) << endl;
}