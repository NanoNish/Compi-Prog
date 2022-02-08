#include <iostream>
using namespace std;

int main(){
    int x;
    float y;
    cin >> x >> y;
    bool flag{1};
    if(x%5 == 0 && x + 0.50 <= y){
        cout << y-x-0.50 << endl;
    }
    else{
        cout << y;
    }
    return 0;
}