#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, count_of_0{0};
    string str, answer{""};
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> str;
        for(int m=str.length()-1; m>=0; m--){
            if(str[m]=='0'){
                count_of_0 ++;
            }
            else{
                break;
            }
        }
        for(int j=str.length()-1-count_of_0; j >= 0; j--){
            answer += str[j];
        }
        cout << answer << endl;
        answer = "";
        count_of_0 = 0; 
    }
    return 0;
}