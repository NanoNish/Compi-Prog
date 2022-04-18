#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> x, y, z;
    int p[n];
    loop(i, 0, n, 1) cin >> p[i];
    loop(i, 0, n, 1){
        int tmp;
        cin >> tmp;
        if(tmp == 1)
            x.insert(p[i]);
        else if(tmp==2)
            y.insert(p[i]);
        else
            z.insert(p[i]);
    }
    loop(i, 0, n, 1){
        int tmp;
        cin >> tmp;
        if (tmp == 1)
            x.insert(p[i]);
        else if (tmp == 2)
            y.insert(p[i]);
        else
            z.insert(p[i]);
    }
    int q;
    cin >> q;
    loop(i, 0, q, 1){
        int tmp;
        cin >> tmp;
        if(tmp == 1){
            if(x.size() == 0)
                cout << -1 << " ";
            else{
                tmp = *(x.begin());
                cout << tmp << " ";
                x.erase(tmp);
                y.erase(tmp);
                z.erase(tmp);
            }
        }
        if (tmp == 2){
            if (y.size() == 0)
                cout << -1 << " ";
            else{
                tmp = *(y.begin());
                cout << tmp << " ";
                x.erase(tmp);
                y.erase(tmp);
                z.erase(tmp);
            }
        }
        if (tmp == 3){
            if (z.size() == 0)
                cout << -1 << " ";
            else{
                tmp = *(z.begin());
                cout << tmp << " ";
                x.erase(tmp);
                y.erase(tmp);
                z.erase(tmp);
            }
        }
    }
}