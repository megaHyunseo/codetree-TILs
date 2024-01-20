#include <iostream>
using namespace std;

int main() {
    
    int n, k;

    cin >> n;

    for(int i = 0 ; i <= n ; i++) {
        cin >> k;
        if(k % 2 == 1 && k % 3 == 0) {
            cout << k << "\n";
        }
    }
    return 0;
}