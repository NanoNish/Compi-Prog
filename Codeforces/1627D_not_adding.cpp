#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec;
    set<int> s;
    loop(i,0,n,1){
        int tmp;
        cin >> tmp;
        vec.push_back(tmp);
        s.insert(tmp);
    }
    int count{0};
    loop(i,0,vec.size(),1){
        loop(j,i+1,vec.size(),1){
            int check{__gcd(vec[i], vec[j])};
            if(s.find(check) == s.end()){
                vec.push_back(check);
                s.insert(check);
                count++;
            }
        }
    }
    cout << count;
}