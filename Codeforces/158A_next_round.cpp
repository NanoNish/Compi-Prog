#include <iostream>
using namespace std;

int main(){
    int n{0}, k{0}, y{0};
    cin >> n >> k;
    int marks[n];
    for(int i = 0; i < n; i++){
        cin >> marks[i];
    }
    if(marks[k-1]>0){
        y=k-1;
        for(int i = k-1; i < n; i++){
            if(marks[i] != marks[k-1]){
                y = i;
                break;
            }
            else{
                y++;
            }
        }
    }
    else{
        for(int i = 0; i < k; i++){
            if(marks[i] == 0){
                y = i;
                break;
            }
        }
    }
    cout << y;
}

/* Kshitiz's method, much better logic"


#include <iostream>

using namespace std;

int main()
{
    int n, k;

    int count{0};
    cin >> n >> k;
    int *array = new int[n];

    // INPUT
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // OUTPUT
    for (int j = 0; j < n; j++)
    {
        if ((array[j] >= array[k - 1]) && ((array[j] != 0) || (array[k - 1] != 0)))
        {
            count++;
        }
    }

    cout << count;

    return 0;
}

*/