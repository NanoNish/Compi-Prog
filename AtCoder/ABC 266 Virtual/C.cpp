#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

bool check(double ax, double ay, double bx, double by, double cx, double cy, double dx, double dy){
    if(bx - ax == 0){
        double m = (bx - ax) / (by - ay);
        double c = bx - m * by;
        if((cx - m*cy - c)/(dx - m*dy - c) > 0)
            return true;
        else
            return false;
    }
    else{
        double m = (by - ay) / (bx - ax);
        double c = by - m * bx;
        if((cy - m*cx - c)/(dy - m*dx - c) > 0)
            return true;
        else
            return false;
    }
}

bool casecheck(double ax, double ay, double bx, double by, double cx, double cy, double dx, double dy){
    int count{0};
    count += check(ax, ay, bx, by, cx, cy, dx, dy);
    count += check(bx, by, cx, cy, ax, ay, dx, dy);
    count += check(cx, cy, ax, ay, bx, by, dx, dy);
    if(count == 3)
        return false;
    else
        return true;
}

signed main(){
    double ax, ay, bx, by, cx, cy, dx, dy;
    cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;
    int count{0};
    count += casecheck(ax, ay, bx, by, cx, cy, dx, dy);
    count += casecheck(bx, by, cx, cy, dx, dy, ax, ay);
    count += casecheck(cx, cy, dx, dy, ax, ay, bx, by);
    count += casecheck(dx, dy, ax, ay, bx, by, cx, cy);
    cout << (count == 4 ? "Yes" : "No");
}