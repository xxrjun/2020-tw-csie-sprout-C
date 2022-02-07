#include <iostream>
#define SIZE 1000

int MEM[SIZE] = {1};
long long F(long long N){
    if(N < SIZE ){
        if(MEM[N]){
            return MEM[N];
        }
        else{
            return MEM[N] = F(N / 3) + F(N /4);
        }
    }
    else{
        return F(N / 3) + F(N / 4);
        
    }
}

int main(){
    using namespace std;

    int T;
    long long N;

    cin >> T;
    for(cin >> T ; T; T--){
        cin >> N;
        cout << F(N) << endl;
    }
    
}

//O(SIZE) + O((N / SIZE)^2/3) = O(N^2 /3)