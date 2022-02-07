#include <iostream>
#include <queue>

int main(){
    using namespace std;

    int T;
    queue <int> que;

    for(int i = 0 ; i < T; i++){
        int command;
        cin >> command;
        int input;
        if(command == 1){
            cin >> input;
            que.push(input);
        }
        else if (command == 2){    
            if(!que.empty()){
                cout << que.front() << endl;
                que.pop();
            }           
            else
                cout << "empty!" << endl;
            
        }
        
    }
}