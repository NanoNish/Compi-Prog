#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

string decToBinary(int n){
    string binaryNum;
    loop(i,0,32,1){
        binaryNum += to_string(n & 1);
        n /= 2;
    }
    reverse(binaryNum.begin(), binaryNum.end());
    return binaryNum;
}

int binToDec(string s){
    int n{};
    int x{1};
    reverse(s.begin(), s.end());
    loop(i,0,31,1){
        if(s[i] == '1')
            n += x;
        x *= 2;
    }
    return n;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        string s{decToBinary(n)};
        string a, b;
        bool flag{1};
        loop(i,0,s.length(),1){
            if(s[i] == '0'){
                a += "0";
                b += "0";
            }
            else if(s[i] == '1'){
                if(s[i+1] == '0'){
                    a += "11";
                    b += "01";
                    i++;
                }
                else{
                    flag = 0;
                    break;
                }
            }
        }
        if(s[s.length()-1] == '1')
            flag = 0;
        if(flag){
            cout << binToDec(a) << " " << binToDec(b) << "\n";
        }
        else
            cout << -1 << "\n";
    }
}