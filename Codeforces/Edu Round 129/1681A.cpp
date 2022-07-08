#include <bits/stdc++.h>
#define ll long long int
#define loop(i, o, n, step) for (auto i{o}; i < n; i += step)
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int alice{0};
        loop(i, 0, n, 1)
        {
            int tmp;
            cin >> tmp;
            alice = max(alice, tmp);
        }
        int m;
        cin >> m;
        int bob{0};
        loop(i, 0, m, 1)
        {
            int tmp;
            cin >> tmp;
            bob = max(bob, tmp);
        }
        if (alice > bob)
            cout << "Alice\nAlice\n";
        else if (alice < bob)
            cout << "Bob\nBob\n";
        else
        {
            cout << "Alice\nBob\n";
        }
    }
}