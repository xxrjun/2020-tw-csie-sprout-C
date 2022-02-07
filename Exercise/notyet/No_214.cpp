#include <iostream>
#define SIZE 100

int main(){

    using namespace std;

    int mine[SIZE][SIZE] = {};
    int n = 0, m = 0;
    
    int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
    int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

    cin >> n >> m;

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            cin >> mine[i][j];
        }
    }
    int res[SIZE][SIZE] = {};

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m ; j++){
            for(int dir = 0; dir < 8 ; dir++){
                if( (i + dx[dir]) >= 0 && (i + dx[dir]) < n  && (j + dy[dir]) >= 0 && (j + dy[dir]) < m){
                    res[i][j] += (mine[i + dx[dir]][j + dy[dir]] == 1);
                }
            }
        }
    }

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < m -1 ; j++){
            cout << res[i][j] << " ";
        }
        cout << res[i][m-1];
        cout << endl;
    }

}