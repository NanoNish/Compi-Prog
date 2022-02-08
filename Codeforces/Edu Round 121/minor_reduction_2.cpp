#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t{0};
    cin >> t;
    for (int i{0}; i < t; i++)
    {
        string s;
        cin >> s;
        int ind{0};
        for (int j{0}; j < s.length() - 1; j++)
        {
            if (int(s[j]) + int(s[j + 1]) > 105)
            {
                ind = j;
                if((int(s[j]) + int(s[j + 1]) - 96) > 10*(s[j] - 48) + (s[j+1] - 48))
                    break;
            }
        }
        string ans{""};
        for (int j{0}; j < s.length(); j++)
        {
            if (j < ind)
                ans += s[j];
            if (j > ind + 1)
                ans += s[j];
            if (j == ind && j + 1 < s.length())
                ans += to_string(int(s[j]) + int(s[j + 1]) - 96);
        }
        cout << ans << endl;
    }
}