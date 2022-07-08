#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int test;
    cin >> test;
    loop(t,1,test+1,1){
        int n;
        cin >> n;
        vector<string> vec;
        loop(i, 0, n, 1){
            string tmp;
            cin >> tmp;
            vec.push_back(tmp);
        }
        loop(l,0,n,1){
            loop(i,0,n,1){
                loop(j,i+1,vec.size(),1){
                    string a{vec.at(i)}, b{vec.at(j)};
                    if(a[a.length()-1] == b[0]){
                        vec.at(i) = a + b;
                        vec.erase(vec.begin() + j);
                        j--;
                    }
                    else if(a[0] == b[b.length()-1]){
                        vec.at(i) = b + a;
                        vec.erase(vec.begin() + j);
                        j--;
                    }
                }
            }
        }
        bool flag{1};
        map<char, int> m;
        string last{};
        loop(i, 0, vec.size(), 1) last += vec.at(i);
        loop(i,0,last.length(),1){
            if(m[last[i]] == 0){
                m[last[i]]++;
            }
            else if(last[i] != last[i-1])
                flag = 0;
        }
        if(flag)
            cout << "Case #" << t << ": " << last << "\n";
        else
            cout << "Case #" << t << ": " << "IMPOSSIBLE" << "\n";
    }
}