#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    for (int l{0}; l < t; l++){
        cin >> n;
        int a, b, c, d, e, f, g, h, i;
        cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
        int ans;
        if(d>=b)
            ans = 2 * d + g - b + f;
        else
            ans = g + b + h;
        cout << ans << endl;
    }
}

/*
a b c
d e f
g h i

first we switch all red ones and we have these cases:
1. d>b --> (d+g) + ((d-b)+f) : all red ones + how many blues in second box
2. d=b --> (d+g) + f : all red ones + how many blues in second box
3. d<b --> (d+g) + ((b-d)+h) : all red ones + how many green in third box

also all the cases of d>g, d=g and d<g are included bcs we arent checking their dependency.
*/