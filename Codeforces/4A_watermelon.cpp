// #include <iostream>
// using namespace std;

// int main(){
// 	int w {0};
// 	cin >> w;
// 	if(w%2==0 && w!=2){
// 		cout << "YES";
// 	}
// 	else if(w==2){
// 		cout << "NO";
// 	} 
// 	else {
// 		cout << "NO";
// 	}
// }

//Redo

// #include <bits/stdc++.h>
// #define ll long long int
// #define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
// using namespace std;

// int main(){
// 	int w;
// 	cin >> w;
// 	cout << (w & 1 || w == 2 ? "NO\n" : "YES\n");
// }

//Redo 2

#include <bits/stdc++.h>
#define ll long long int
#define loop(i,o,n,step) for(auto i{o}; i < n; i += step)
using namespace std;

int main(){
	int w;
	cin >> w;
	if(w&1)
		cout << "NO";
	else if(w==2)
		cout << "NO";
	else
		cout << "YES";
}