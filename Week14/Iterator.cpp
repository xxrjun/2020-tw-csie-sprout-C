#include <iostream>
#include <vector>

int main(){
    using namespace std;

    vector <int> v = {1,2,3};

    //before c++ 11
    for(vector<int>::iterator iter = v.begin() ; iter != v.end() ; iter++){
        cout << *iter;
    }
    cout << endl;

    //after C++ 11 , we could use "auto" replace "vector<int>::iterator"
    for(auto iter = v.begin() ; iter != v.end() ; iter++){
        cout << *iter;
    }
    cout << endl;

    // resize v bound to 5 ,less than 2*3
    v.resize(5);
    cout << "v.capacity: " << v.capacity() << endl; // 6
    //resize v bound to 8 , greater than 2*3
    v.resize(8);
    cout << "v.capacity: " << v.capacity() << endl; // 10

    //cout << *iter << endl;
    //error cause vector v is change. then the origin iter is invalid
}