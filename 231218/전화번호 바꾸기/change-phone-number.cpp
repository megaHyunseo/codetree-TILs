#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int a, b, c;

    cin >> a;
    cin.get();

    cin >> b;
    cin.get();

    cin >> c;

    cout << "0" << a << "-" << c << "-" << b;
    // 모범 답안
    // cout << "010-" << c << "-" << b;
    return 0;
}