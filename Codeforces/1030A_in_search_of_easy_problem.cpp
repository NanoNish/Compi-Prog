#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n{0};
    bool temp;
    cin >> n;
    for (int i{0}; i < n; i++){
        cin >> temp;
        if(temp){
            cout << "HARD" << endl;
            return 0;
        }
    }
    cout << "EASY" << endl;
}