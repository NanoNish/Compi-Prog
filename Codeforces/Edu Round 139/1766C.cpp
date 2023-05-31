#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int m;
        cin >> m;
        string a, b;
        cin >> a >> b;
        int where{0}; //0 is a, 1 is b
        bool flag1{0}, flag2{0};
        loop(i,0,m-1,1){
            if(where == 0){
                if(b[i] == 'B' && b[i+1] == 'B'){
                    where = 1;
                    continue;
                }
                if(b[i] == 'B' && b[i+1] == 'W'){
                    flag1 = 1;
                    break;
                }
                if(b[i] == 'W' && a[i+1] == 'B')
                    continue;
                if(b[i] == 'W' && a[i+1] == 'W'){
                    flag1 = 1;
                    break;
                }
            }
            else{
                if(a[i] == 'B' && a[i+1] == 'B'){
                    where = 0;
                    continue;
                }
                if(a[i] == 'B' && a[i+1] == 'W'){
                    flag1 = 1;
                    break;
                }
                if(a[i] == 'W' && b[i+1] == 'B')
                    continue;
                if(a[i] == 'W' && b[i+1] == 'W'){
                    flag1 = 1;
                    break;
                }
            }
        }
        where = 1;
        loop(i,0,m-1,1){
            if(where == 0){
                if(b[i] == 'B' && b[i+1] == 'B'){
                    where = 1;
                    continue;
                }
                if(b[i] == 'B' && b[i+1] == 'W'){
                    flag2 = 1;
                    break;
                }
                if(b[i] == 'W' && a[i+1] == 'B')
                    continue;
                if(b[i] == 'W' && a[i+1] == 'W'){
                    flag2 = 1;
                    break;
                }
            }
            else{
                if(a[i] == 'B' && a[i+1] == 'B'){
                    where = 0;
                    continue;
                }
                if(a[i] == 'B' && a[i+1] == 'W'){
                    flag2 = 1;
                    break;
                }
                if(a[i] == 'W' && b[i+1] == 'B')
                    continue;
                if(a[i] == 'W' && b[i+1] == 'W'){
                    flag2 = 1;
                    break;
                }
            }
        }
        if(flag1 && flag2)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}