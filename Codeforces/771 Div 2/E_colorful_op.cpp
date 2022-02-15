//Status: TLE

#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

struct cell{
    int color{1};
    int value{0};
};

int main(){
    int n, q;
    cin >> n >> q;
    cell arr[n];
    string s;
    while(q--){
        cin >> s;
        if(s == "Color"){
            int l, r, c;
            cin >> l >> r >> c;
            loop(i,l-1,r,1){
                arr[i].color = c;
            }
        }
        if(s == "Add"){
            int c, a;
            cin >> c >> a;
            loop(i,0,n,1){
                if(arr[i].color == c)
                    arr[i].value += a;
            }
        }
        if(s == "Query"){
            int id;
            cin >> id;
            cout << arr[id - 1].value << endl;
        }
    }
}