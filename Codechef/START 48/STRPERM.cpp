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
        int n, m;
        cin >> n >> m;
        int arr[n]{}, marked[n + 1]{}, wanted[n + 1]{}, final[n + 1]{};
        loop(i, 0, m, 1)
        {
            int a, b;
            cin >> a >> b;
            if (a > b)
                wanted[a] = b;
            else
                final[a] = b;
            arr[b - 1]++;
        }
        loop(i, 1, n, 1)
        {
            arr[i] += arr[i - 1];
        }
        bool flag{0};
        loop(i, 0, n, 1)
        {
            if (arr[i] > i + 1)
            {
                cout << -1 << "\n";
                flag = 1;
                break;
            }
        }
        if (flag)
            continue;
        vector<int> left(0);
        for (auto i{n}; i > 0; i--)
        {
            if (wanted[i])
            {
                int j{wanted[i]};
                while (true)
                {
                    if (marked[j] == 0)
                    {
                        marked[j] = i;
                        break;
                    }
                    else
                        j--;
                }
            }
            else if (final[i] == 0)
                left.push_back(i);
        }
        for (auto i{n}; i > 0; i--)
        {
            if (final[i])
            {
                int j{i};
                while (true)
                {
                    if (j == 0)
                        j = final[i];
                    if (marked[j] == 0)
                    {
                        marked[j] = i;
                        break;
                    }
                    else
                        j--;
                }
            }
        }
        reverse(left.begin(), left.end());
        auto it{left.begin()};
        loop(i, 1, n + 1, 1)
        {
            if (marked[i] == 0)
            {
                marked[i] = *it;
                it++;
            }
        }
        loop(i, 1, n + 1, 1)
        {
            cout << marked[i] << " ";
        }
        cout << "\n";
    }
}