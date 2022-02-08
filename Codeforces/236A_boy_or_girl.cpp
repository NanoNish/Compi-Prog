#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    int n = str.length();
    int count{0};
    for( int i=0; i<n; i++){
        if(str[i] != '0'){
            for(int j = i+1; j<n; j++){
                if(str[j] == str[i]){
                    str[j] = '0';
                    count ++;
                }
            }
        }
    }
    int flag = (n-count) % 2;
    switch(flag){
        case 0:
            cout << "CHAT WITH HER!";
            break;
        case 1:
            cout << "IGNORE HIM!";
            break;
        default:
            break;
    }
    return 0;
}