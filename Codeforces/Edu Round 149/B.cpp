#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int arr[n + 1]{};
        arr[0] = 200;
        loop(i,0,n,1){
            if(s[i] == '<')
                arr[i + 1] = arr[i] + 1;
            else
                arr[i + 1] = arr[i] - 1;
        }
        set<int> st;
        for(auto i: arr)
            st.insert(i);
        cout << st.size() << "\n";
    }
}