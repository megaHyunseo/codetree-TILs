#include <iostream>
using namespace std;

int main() {
    
    int n;

    cin >> n;

    int cnt = 0;
    for (int i = 1 ; i <= 5000 ; i++) {
        
        n /= i;
        cnt += 1;

        if (n <= 1) {
            cout << cnt;
            break;
        }
        
    }
    return 0;
}