#include <iostream>
#include <string>
using namespace std;

int main(){
    int n{0}, x{0};
    string command{""};
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> command;
        if(command[1] == '+'){
            x++;
        }
        else{
            x--;
        }
    }
    cout << x;
}