#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n{0}, temp, flag, count{1};
    cin >> n >> flag;
    for (int i{1}; i < n; i++){
        cin >> temp;
        if(temp != flag){
            count++;
            flag = temp;
        }
    }
    cout << count;
    return 0;
}