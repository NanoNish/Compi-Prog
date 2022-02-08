#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    long sum{0};
    string str;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> str;
        for(int j=0; j<str.length(); j++){
            sum += int(str[j]) - 48;
        }
        cout << sum << endl;
        sum = 0;
    }
}