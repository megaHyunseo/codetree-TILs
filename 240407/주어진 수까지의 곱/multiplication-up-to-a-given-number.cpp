#include <iostream>
using namespace std;

int main() {
    
    int a, b;

    cin >> a >> b;
    
    int k = 1;
    for(int i = a ; i <= b ; i++) {
        k *= i;
    }

    cout << k;

    return 0;
}