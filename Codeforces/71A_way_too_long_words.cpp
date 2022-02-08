#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    string str, len_2, answer = "";
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> str;
        if(str.length()>10){
            answer += str[0];
            len_2 = to_string(str.length()-2);
            answer += len_2;
            answer += str[str.length()-1];
            cout << answer << endl;
            answer = "";
        }
        else{
            cout << str << endl;
        }
    }
}