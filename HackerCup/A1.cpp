#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main(){
    ifstream inp("input.txt");
    ofstream out("output.txt");
    int t;
    inp>>t;
    loop(test,1,t+1,1){
        int n, k;
        inp >> n >> k;
        vector<int> a(n), b(n);
        loop(i, 0, n, 1) inp >> a[i];
        loop(i, 0, n, 1) inp >> b[i];
        int it{-1};
        loop(i,0,n,1){
            if(a[i] == b[0]){
                it = i;
                break;
            }
        }
        bool flag{1};
        if(it == -1)
            flag = 0;
        loop(i,0,n,1){
            if(a[(it+i)%n] != b[i]){
                flag = 0;
                break;
            }
        }
        if(it != 0 && k == 0) flag = 0;
        else if(it == 0 && k == 1) flag = 0;
        else if((n == 2) && ((k&1 == 0 && it != 0) || (k&1 == 1 && it == 0)))
            flag = 0;
        if(flag)
            out << "Case #" << test << ": YES\n";
        else
            out << "Case #" << test << ": NO\n";
    }
}