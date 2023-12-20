#include <iostream>
using namespace std;

int main() {
    
    int a, b, c;

    cin >> a >> b >> c;

    // a와 b를 비교한뒤, a가 b보다 크다면 a와 c를 비교하여 최댓값을 구함.
    if(a >= b) {
        if(a >= c) {
            cout << a;
        }
        else {
            cout << c;
        }
    }
    else { // a와 b를 비교한 결과가 나와있으므로, b와 c만 비교하여 최댓값을 구함.
        if(b >= c) {
            cout << b;
        }
        else {
            cout << c;
        }
    }
    return 0;
}