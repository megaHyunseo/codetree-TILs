#include <iostream>
using namespace std;

int main() {
    
    int a, b;

    cin >> a >> b;

    int prod = 1;
    for(int i = a ; i <= b ; i++) {
        if(i % a == 0) {
            prod *= i;
        }
    }

    cout << prod;
    
    return 0;
}