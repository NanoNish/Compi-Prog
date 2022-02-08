#include <iostream>
using namespace std;

int main(){
    int cost_per, number_of_bananas;
    long money_already_has;
    long summation{0}, total_cost{0};
    cin >> cost_per >> money_already_has >> number_of_bananas;
    for(int i=0; i<=number_of_bananas; i++){
        summation += i;
    }
    if(summation*cost_per > money_already_has){
        cout << (summation*cost_per - money_already_has);
    }
    else{
        cout << 0;
    }
    return 0;
}