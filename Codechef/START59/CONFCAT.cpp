#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a, b, c;
        loop(i,0,n,1){
            int tmp;
            cin >> tmp;
            c.push_back(tmp);
        }
        a.push_back(c[0]);
        int comp{c[0]};
        bool flag{1}, finalflag{0};
        loop(i,1,n,1){
            if(c[i] < comp){
                if(flag)
                    a.push_back(c[i]);
                else
                    b.push_back(c[i]);
            }
            else if(c[i] > comp){
                flag = !flag;
                if(flag)
                    a.push_back(c[i]);
                else
                    b.push_back(c[i]);
                comp = c[i];
            }
            else{
                finalflag = 1;
                break;
            }
        }
        vector<int> asort{a}, bsort{b};
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        loop(i, 1, a.size(), 1) if (a[i] == a[i - 1]) finalflag = 1;
        loop(i, 1, b.size(), 1) if (b[i] == b[i - 1]) finalflag = 1;
        if (a.size() == 0 || b.size() == 0)
            finalflag = 1;
        if(finalflag){
            cout << -1 << "\n";
            continue;
        }
        cout << asort.size() << "\n";
        for(auto i: asort)
            cout << i << " ";
        cout << "\n";
        cout << bsort.size() << "\n";
        for(auto i: bsort)
            cout << i << " ";
        cout << "\n";
    }
}