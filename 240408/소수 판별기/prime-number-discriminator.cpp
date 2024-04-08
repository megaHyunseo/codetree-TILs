#include <iostream>
using namespace std;

int main() {
    
    int n;
    bool k = true;

    for(int i = 2 ; i < n ; i++) {
        if(n % i == 0) {
            k = false;
        }
    }

    if(k == true) {
        cout << "P";
    }
    else {
        cout << "C";
    }
    
    return 0;
}