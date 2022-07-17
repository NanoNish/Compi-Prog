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
        int size{n}, next_smallest{1};
        bool arr[n + 1]{};
        cout << 2 << "\n";
        while (size)
        {
            int counter{next_smallest++};
            while (counter <= n)
            {
                cout << counter << " ";
                size--;
                arr[counter] = 1;
                counter *= 2;
            }
            while (true)
            {
                if (arr[next_smallest] == 0)
                {
                    break;
                }
                next_smallest++;
            }
        }
        cout << "\n";
    }
}

// vector<int> vec(n);
//  loop(i, 0, n, 1) vec[i] = i + 1;
//  cout << 2 << "\n";
//  while (size){
//      int counter{vec.at(0)};
//      while (counter <= n){
//          cout << counter << " ";
//          vec.erase(find(vec.begin(), vec.end(), counter));
//          counter *= 2;
//      }
//  }
//  cout << "\n";