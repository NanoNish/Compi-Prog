#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

//code to convert to bin from gfg
string decToBinary(ll n){
    // array to store binary number
    int binaryNum[64];
    // counter for binary array
    int i = 0;
    while (n > 0){
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    string ans;
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        ans += to_string(binaryNum[j]);
    return ans;
}

int main(){
    int n{0};
    cin >> n;
    ll arr[n];
    ll sum{0};
    loop(i, 0, n, 1){
        cin >> arr[i];
        sum += arr[i];
    }
    if(sum == 1){
        cout << "GOODBYE JOJO";
        return 0;
    }
    string s = decToBinary(sum);
    int count_1{0};
    loop(i,0,s.length(),1){
        if(s[i] == '1')
            count_1++;
    }
    if(count_1 == 1 || count_1 == 2)
        cout << "HOORAY";
    else
        cout << "GOODBYE JOJO";
}