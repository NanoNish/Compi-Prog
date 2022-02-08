#include <bits/stdc++.h>
using namespace std;
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;

long factorial(int n)
{
    cpp_int fact{1};
    for (int i{2}; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int t, n;
    cin >> t;
    for (int i{0}; i < t; i++)
    {
        cin >> n;
        cout << factorial(n) << endl;
    }
}