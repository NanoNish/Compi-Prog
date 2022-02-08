#include <iostream>
using namespace std;

int main(){
    int matrix[25];
    int index;
    for(int i=0; i<25; i++){
        cin >> matrix[i];
        if(matrix[i] == 1){
            index = i;
            break;
        } 
    }
    int x = index % 5;
    int y = int( index / 5);
    cout << std::abs(x-2) + std::abs(y-2);
}