#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    string str;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> str;
        cout << int(str[0]) + int(str[str.length()-1]) - 96 << endl;
    }
}