    #include <bits/stdc++.h>
    #define ll long long int
    #define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
    using namespace std;

    int main(){
        int t;
        cin>>t;
        while(t--){
            int n, k;
            cin >> n >> k;
            map<int, int> m;
            loop(i,0,n,1){
                int tmp;
                cin >> tmp;
                m[tmp]++;
            }
            vector<int> vec(0);
            for(auto i: m){
                if(i.second >= k)
                    vec.push_back(i.first);
            }
            if(vec.size() == 0){
                cout << -1 << "\n";
                continue;
            }
            tuple<int, int, int> ans = {vec[0], vec[0], 1}, tmp = {vec[0], vec[0], 1};
            loop(i,1,vec.size(),1){
                if(vec[i] == vec[i-1] + 1){
                    get<1>(tmp) = vec[i];
                    get<2>(tmp)++;
                }
                else{
                    if(get<2>(tmp) > get<2>(ans)){
                        ans = tmp;
                    }
                    tmp = {vec[i], vec[i], 1};
                }
            }
            if (get<2>(tmp) > get<2>(ans)){
                ans = tmp;
            }
            cout << get<0>(ans) << " " << get<1>(ans) << "\n";
        }    
    }