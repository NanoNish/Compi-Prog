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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int dp[n - k + 1]{};
        loop(i, 0, k, 1)
        {
            if (s[i] == 'W')
                dp[0]++;
        }
        loop(i, k, n, 1)
        {
            dp[i - k + 1] = dp[i - k];
            if (s[i - k] == 'W')
                dp[i - k + 1]--;
            if (s[i] == 'W')
                dp[i - k + 1]++;
        }
        sort(dp, dp + n - k + 1);
        cout << dp[0] << "\n";
    }
}