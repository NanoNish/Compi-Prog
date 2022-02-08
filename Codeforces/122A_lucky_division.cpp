#include <bits/stdc++.h>
using namespace std;

int main(){
    //4 7 44 47 74 77 444 447 474 477 744 747 774 777
    int arr[14]{4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int n{};
    cin >> n;
    for(auto i : arr){
        if(n>=i && n%i == 0){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}