#include <iostream>
#include <string>
using namespace std;

int main(){
    string test;
    cin >> test;
    int ascii_val = int(test[0]);
    if(ascii_val >= 97 && ascii_val <= 122){
        test[0] = char(ascii_val - 32);
    }
    cout << test;
    return 0;
}