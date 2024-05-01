#include <iostream>
using namespace std;

int main() {
    
    int n;

    cin >> n;

    for(int i = n ; i > 0 ; i--) {
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

*****
v***
vv*

i = 3, v = 0, '*' = 5
i = 2, v = 1, '*' = 3
i = 1, v = 2, '*' = 1

v → n - i
'*' → 2 * i - 1

*/