#include <bits/stdc++.h>
using namespace std;

int main(){
    int n{0}, count{0};
    cin >> n;
    string s;
    cin >> s;
    for (size_t i{0}; i < n; i++){
        if(s[i] == 'A')
            count++;
    }
    if(count > double(n)/2)
        cout << "Anton";
    else if(count < double(n)/2)
        cout << "Danik";
    else
        cout << "Friendship";
}