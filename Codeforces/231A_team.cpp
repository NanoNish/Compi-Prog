#include <iostream>
using namespace std;

int main(){
    int n, a, b, c, sum;
    cin >> n;
    int x {0};
    for(int i=0; i<n; i++){
        cin >> a >> b >> c;
        sum = a+b+c;
        if(sum>1){
            x++;
        }
    }
    cout << x;
}