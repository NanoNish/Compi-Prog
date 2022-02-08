// No frickin way this works
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int a;
    cin >> t;
    for (int i{0}; i < t; i++)
    {
        cin >> a;
        if (a <= 1)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
}