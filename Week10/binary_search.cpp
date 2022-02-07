#include <iostream>

int binary_search(int arr[], int n , int value){
    int left = 0, right = n - 1;
     
    while(right >= left){
        int mid = (left + right) / 2;
        if(arr[mid] == value){
            return arr[mid];
        }
        else{
            if(arr[mid] > value){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
    }

    return -1;
  
}

int main(){
    using namespace std;

    int arr[1000000];
    
}