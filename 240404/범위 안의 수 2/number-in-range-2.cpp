#include <iostream>
using namespace std;

int main() {
    
    int sum = 0, cnt = 0;
    int n;

    cout << fixed;
    cout.precision(1);

    for (int i = 0 ; i < 10 ; i++) {

        cin >> n;

        if (n >= 0 && n <= 200) {
            sum += n;
            cnt += 1;
        }
    }

    cout << sum << " " << (double)sum/cnt;

    return 0;
}