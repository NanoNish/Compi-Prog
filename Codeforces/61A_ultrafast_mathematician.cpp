#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    string str1, str2;
    cin >> str1 >> str2;
    for (size_t i{0}; i < str1.length(); i++){
        if(str1[i] == str2[i])
            cout << 0;
        else
            cout << 1;
    }
}