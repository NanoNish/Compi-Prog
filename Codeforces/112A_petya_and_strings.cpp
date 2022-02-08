#include <iostream>
#include <string>
using namespace std;

string lcase(string str){
    int diff = int('a')-int('A');
    for(int i = 0; i<str.length(); i++){
        int ascii_val = int(str[i]);
        if(ascii_val>=65 and ascii_val<=90){
            str[i]= char(ascii_val + diff);
        }
    }
    return str;
}

int main(){
    int diff = int('a')-int('A');
    string str1, str2;
    cin >> str1 >> str2;
    str1 = lcase(str1);
    str2 = lcase(str2);
    if(str1 == str2){
        cout << 0;
    }
    else if(str1 < str2){
        cout << -1;
    }
    else{
        cout << 1;
    }
    return 0;
}