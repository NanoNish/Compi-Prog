#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    float T1, T2, R1, R2;
    for(int i=0; i<n; i++){
        cin >> T1 >> T2 >> R1 >> R2;
        if(pow((T1/T2),2) == pow((R1/R2),3)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}