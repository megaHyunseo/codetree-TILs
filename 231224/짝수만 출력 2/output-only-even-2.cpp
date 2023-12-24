#include <iostream>
using namespace std;

int main() {
    
    int a, b;
    int i;

    cin >> a >> b;

    i = a;

    while(i >= b) {
        cout << i << " ";
        i -= 2;
    }
    return 0;
}