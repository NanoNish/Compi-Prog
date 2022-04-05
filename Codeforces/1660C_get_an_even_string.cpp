#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        map<char, int> m;
        int arr[s.length()]{};
        for (auto i{s.length() - 1}; i >= 0; i--){
            if(m[s[i]] == 0)
                arr[i] = -1;
            else
                arr[i] = m[s[i]] - i;
        }
        //needs to be completed
        //dp --> store next occurance of s[i] as that will be increment
        //compare to next increment + 1 to check increment
    }
}