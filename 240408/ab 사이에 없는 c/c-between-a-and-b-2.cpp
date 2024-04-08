#include <iostream>
using namespace std;

int main() {
    
    int a, b, c;
    bool k = true;

    cin >> a >> b >> c;

    for(int i = a ; i <= b ; i++) {
        if(i % c == 0) {
            k = false;
        }
    }

    if(k == true) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}