#include <iostream>
using namespace std;

int main() {
    
    int a, b;

    cin >> a >> b;

    int prod = 1;
    for(int i = a ; i <= b + 1 ; i++) {
        prod *= a;
    }

    cout << prod;

    return 0;
}