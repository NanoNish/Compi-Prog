#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    string str, answer{""};
    cin >> n >> str;
    char check{str[0]};
    answer += str[0];
    for(int i=1; i<n; i++){
        if(str[i] != check){
            check = str[i];
            answer += str[i];
        }
    }
    cout << str.length() - answer.length();
    return 0;
}


// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     int n, count{0};
//     string str;
//     cin >> n >> str;
//     for(int i=1; i<n; i++){
//         if(str[i-1] == str[i]){
//             count ++;
//         }
//     }
//     cout << count;
//     return 0;
// }