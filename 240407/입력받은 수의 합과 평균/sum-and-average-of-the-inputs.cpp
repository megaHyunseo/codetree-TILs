#include <iostream>
using namespace std;

int main() {
    
    int n;
    int a;
    int sum = 0;

    cin >> n;

    for (int i = 0 ; i < n ; i++) {
        
        cin >> a;
        
        sum += a;
    }

    cout << fixed;
    cout.precision(1);

    cout << sum << " " << (double)sum/n;

    return 0;
}