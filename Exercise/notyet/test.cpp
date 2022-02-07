#include <iostream>
#define size 100
using namespace std;
int main(){
    int n, m;
    int mine[size][size] = {}; // mine[n][m]
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cin >> mine[i][j];
    }
    int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
    int dy[8] = {0, -1, -1, -1, 0, 1, 1, 1};
    int res[size][size] = {}; // the answer
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            for(int dir = 0; dir < 8; dir++){
                if(j+dx[dir]>=0 && j+dx[dir]<m &&
                    i+dy[dir]>=0 && i+dy[dir]<n){
                        res[i][j] += (mine[i+dy[dir]][j+dx[dir]] == 0);
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m-1; j++)
            cout << res[i][j] << ' ';
        cout << res[i][m-1];
        cout << endl;
    }
}