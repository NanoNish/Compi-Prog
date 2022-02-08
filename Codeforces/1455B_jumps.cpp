#include <bits/stdc++.h>
using namespace std;

int main(){
    int t{0};
    cin >> t;
    int i{0};
    while(i<t){
        int x{0}, k{1};
        cin >> x;
        if(x==1){
            cout << k << endl;
            i++;
            continue;
        }
        do{
            k++;
        } while (k*(k+1) < 2*x);
        if(k*(k+1) == 2*(x + 1))
            k++;
        cout << k << endl;
        i++;
    }
}