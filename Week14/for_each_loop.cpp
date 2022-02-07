#include <iostream>

int main(){
    using namespace std;

    int arr[] = {1,2,3,4,5};

    //this i is a temporary container
    for(int i : arr){
        cout << i << ' ';
    }
    cout << endl;

    //change  value by reference
    for(int &i : arr)
        i *= 2 ;
    cout << "after change value by reference: " << endl;
    for(int i : arr){
        cout << i << ' ';
    }
    cout << endl;
}