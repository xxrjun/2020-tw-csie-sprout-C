#include <iostream>

int F(int n, int m){
    if(m == 1 || n == m){
        return 1;
    }
    else {
        return F(n - 1, m - 1) +F(n - 1 , m);
    }
}

int main(){
    using namespace std;

    int T;
    int result[T];

    cin >> T;
    for(int i = 0 ; i < T ; i++){
        int n = 0, m = 0;
        cin >> n >> m;
        result[i] =  F(n,m);
    }
    for(int i = 0; i < T; i++){
        cout << result[i] << endl;
    }
}