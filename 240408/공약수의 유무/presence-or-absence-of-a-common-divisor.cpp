#include <iostream>
using namespace std;

int main() {
    
    int a, b;
    bool k = false;

    cin >> a >> b;

    for(int i = a ; i <= b ; i++) {
        if(1920 % i == 0 && 2880 % i == 0) {
            k = true;
        }
    }

    cout << k;
    
    return 0;
}