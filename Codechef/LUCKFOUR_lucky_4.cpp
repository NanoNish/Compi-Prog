#include <iostream>
#include <string>
using namespace std;

int main(){
    int T, count{0};
    string str{""};
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> str;
        for(int j=0; j<str.length(); j++){
            if(str[j]== '4'){
                count ++;
            }
        }
        cout << count << endl;
        count = 0;
    }
}