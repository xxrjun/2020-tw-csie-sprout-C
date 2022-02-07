#include <iostream>
#include <algorithm>
#include <cstdlib>

void get_random_array(int arr[], int n){
    srand(127);
    for(int i = 0;i < n; i++){
        arr[i] = rand();
    }
}

int main(){
    int arr[100000 + 5];
    int n = 100000;

    get_random_array(arr, n);
    std::sort(arr, arr + n);
    for(int i = 0; i < n ; i++){
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
    return 0;
}