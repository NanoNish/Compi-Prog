#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
    int n{0}, temp{0}, count_1{0}, count_2{0}, count_3{0}, count_4{0};
    cin >> n;
    for (int i{0}; i < n; i++){
        cin >> temp;
        switch(temp){
            case 1:
                count_1++;
                break;
            case 2:
                count_2++;
                break;
            case 3:
                count_3++;
                break;
            case 4:
                count_4++;
                break;
            default:
                break;
        }
    }
    int ans{count_4};
    ans += count_3;
    count_1 -= count_3;
    ans += (count_2 + 1) / 2;
    count_1 -= 2 * (count_2 % 2);
    ans += (count_1 > 0 ? (count_1 + 3) / 4 : 0);
    cout << ans;
}