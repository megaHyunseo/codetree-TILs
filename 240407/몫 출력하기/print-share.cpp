#include <iostream>
using namespace std;

int main() {
    
    int n;

    int cnt = 0;
    while (1) {

        cin >> n;

        if (cnt == 3) {
            break;
        }
        if (n % 2 == 0) {
            n /= 2;
            cout << n << endl;
            cnt += 1;
        }
        else {
            continue;
        }
    }
    return 0;
}