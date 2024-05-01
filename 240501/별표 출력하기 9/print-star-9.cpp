#include <iostream>
using namespace std;

int main() {
    
    int n;

    cin >> n;

    for(int i = 1 ; i <= n ; i++) {
        for(int j = 0 ; j < n - i ; j++) {
            cout << " " << " ";
        }
        for(int j = 0 ; j < 2 * i - 1 ; j++) {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}

/*

n = 3

vv*
v**
*****

i = 1, v = 2, '*' = 1
i = 2, v = 1, '*' = 3
i = 3, v = 0, '*' = 5

v → n - i
'*' → 2 * i - 1

*/