#include <iostream>
#include <cstring>

int main(){

    using namespace std;

    char Input[100];
    char B[100];
    cin.getline(Input, 100);//stop when "\n"

    cout << "Input Length: " << strlen(Input) << endl;
    // strcmp(char A[], char B[]) if same return 0 , otherwise return -1;
    cout << "int strcmp(Input, \"QAQ\"): " << strcmp(Input, "QAQ") << endl;
    cout << "Boolean:" << (strcmp(Input, "QAQ") == 0) << endl;
    
    
    cout << "B: " << strcpy(B,Input) << endl;
}