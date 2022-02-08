#include <iostream>
#include <string>
using namespace std;

int main(){
    string sum, answer{""};
    cin >> sum;
    int length = sum.length();
    int count_1{0}, count_2{0}, count_3{0};
    for(int i=0; i<length; i=i+2){
        if(int(sum[i]) == 49){
            count_1 ++;
        }
        else if(int(sum[i]) == 50){
            count_2 ++;
        }
        else{
            count_3 ++;
        }
    }
    for(int i=0; i<(count_1+count_2+count_3); i++){
        if(i<count_1)
            answer = answer + "1";
        else if(i<(count_1 + count_2))
            answer = answer + "2";
        else
            answer = answer + "3";
        if((i+1)<(count_1+count_2+count_3))
            answer = answer + "+";
    }
    cout << answer;
}