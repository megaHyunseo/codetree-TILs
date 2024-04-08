#include <iostream>
using namespace std;

int main() {
    
    int a, b, c;
    bool k = false;

    for(int i = a ; i <= b ; i++) {
        if(i % c == 0) {
            k = true;
            break;
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