#include <iostream>
using namespace std;

int main(){
    int n, count{0};
    cin >> n;
    long k, temp;
    cin >> k;
    for(int i=0; i<n; i++){
        cin >> temp;
        if(temp%k == 0){
            count++;
        }
    }
    cout << count;
    return 0;
}