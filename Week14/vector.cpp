#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    using namespace std;

    vector <int> v;

    cout << "Oringin vector: \n\telement: ";
    for(int i : v)
        cout  << i;
    cout << endl;
    cout << "\tcapacity: " << v.capacity() << endl;
    cout << "\tsize: " << v.size() << endl;

    //add element to v
    for(int i = 0 ; i < 10 ; i++){
        v.push_back(i);
    }
    cout << "After adding element: \n\telement: ";
    for(int i : v)
        cout  << i << ' ';
    cout << endl;
    cout << "\tcapacity: " << v.capacity() << endl;
    cout << "\tsize: " << v.size() << endl;

    //reverse v
    reverse(v.begin(), v.end());
    cout << "After reverse: \n\telement: ";
    /*for(auto iter = v.begin(); iter != v.end(); ++iter){
        cout << *iter << ' ';
    }*/
    for(int i : v)
        cout  << i << ' ';
    cout << endl;
    cout << "\tcapacity: " << v.capacity() << endl; // no change
    cout << "\tsize: " << v.size() << endl;

    //clear v
    v.clear();
    cout << "After clear: \n\telement: ";
    for(int i : v)
        cout  << i << ' ';
    cout << endl;
    cout << "\tcapacity: " << v.capacity() << endl; // no change
    cout << "\tsize: " << v.size() << endl;
    
}