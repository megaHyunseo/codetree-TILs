#include <iostream>
using namespace std;

int main() {
    
    int n;

    cin >> n;

    int sum = 0;
    for(int i = 1 ; i <= n ; i++) {
        if (sum > n) {
            cout << i-1;
            break;
        }

        sum += i;
    }

    return 0;
}