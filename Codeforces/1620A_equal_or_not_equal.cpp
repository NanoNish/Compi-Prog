#include <iostream>
#include <string>
using namespace std;

int main(){
    int n{0}, count_N{0};
    cin >> n;
    string str;
    for(int i=0; i<n; i++){
        cin >> str;
        for(int j=0; j<str.length(); j++){
            if(str[j] == 'N'){
                count_N ++;
            }
            if(count_N == 2){
                break;
            }
        }
        if(count_N != 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        count_N = 0;
    }
}