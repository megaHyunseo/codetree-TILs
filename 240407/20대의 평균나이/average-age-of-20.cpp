#include <iostream>
using namespace std;

int main() {
    
    int sum = 0;

    int cnt = 0;
    while (1) {

        int n;

        cin >> n;

        if (n >= 30) {
            break;
        }

        cnt++;

        sum += n;
    }

    cout << fixed;
    cout.precision(2);

    cout << (double)sum / cnt;

    return 0;
}