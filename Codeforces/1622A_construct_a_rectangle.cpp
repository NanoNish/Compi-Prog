#include <iostream>
using namespace std;

int check(long a, long b, long c){
    int flag{0};
    if(b==c){
        if(a%2 == 0){
            flag = 1;
        }
    }
    else{
        if(a == b+c){
            flag = 1;
        }
    }
    return flag;
}

int main(){
    int n, flag{0};
    long a,b,c;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b >> c;
        int flag = check(a,b,c) + check(b,c,a) + check(c,a,b);
        if(flag == 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}