#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> vec;
        int n;
        cin >> n;
        n = int(pow(2, n));
        loop(i,0,n/4, 1){
                int a, b, c;
                cout << "? " << 4*i + 1 << " " << 4*i + 2 << endl;
                cin >> a;
                a = (a == 1 ? 4 * i + 1 : 4 * i + 2);
                cout << "? " << 4 * i + 3 << " " << 4 * i + 4 << endl;
                cin >> b;
                b = (b == 1 ? 4 * i + 1 : 4 * i + 2);
                cout << "? " << a << " " << b << endl;
                cin >> c;
                c = (c == 1 ? a : b);
                vec.push_back(c);
            }
        while(vec.size() > 1){
            vector<int> tmp;
            loop(i,0,vec.size()/4, 1){
                int a, b, c;
                cout << "? " << vec.at(4 * i) << " " << vec.at(4 * i + 1) << endl;
                cin >> a;
                a = (a == 1? vec.at(4*i):vec.at(4 * i + 1));
                cout << "? " << vec.at(4 * i + 2) << " " << vec.at(4 * i + 3) << endl;
                cin >> b;
                b = (b == 1? vec.at(4*i+2):vec.at(4 * i + 3));
                cout << "? " << a << " " << b << endl;
                cin >> c;
                c = (c == 1 ? a : b);
                tmp.push_back(c);
            }
            vec = tmp;
        }
        if(vec.size() == 1)
            cout << "! " << vec.at(0) << endl;
    }
}