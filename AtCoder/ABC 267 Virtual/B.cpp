#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    string s;
    cin >> s;
    int arr[7]{};
    if(s[0] == '1'){
        cout << "No";
        return 0;
    }
    if (s[6] == '0')
        arr[0] = 1;
    if (s[3] == '0')
        arr[1] = 1;
    if (s[1] == '0' && s[7] == '0')
        arr[2] = 1;
    if (s[0] == '0' && s[4] == '0')
        arr[3] = 1;
    if (s[2] == '0' && s[8] == '0')
        arr[4] = 1;
    if (s[5] == '0')
        arr[5] = 1;
    if (s[9] == '0')
        arr[6] = 1;
    int flag{0};
    loop(i,0,7,1){
        if((flag == 0 || flag == 2) && arr[i] == 0)
            flag++;
        else if(flag == 1 && arr[i] == 1)
            flag++;
    }
    if(flag == 3) cout << "Yes";
    else cout << "No";
}