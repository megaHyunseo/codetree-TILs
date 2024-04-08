#include <iostream>
using namespace std;

int main() {
    
    bool k = true;

    for(int i = 0 ; i < 5 ; i++) {
        
        int n;

        cin >> n;

        if(n % 3 != 0) {
            k = false;
        }
    }

    if(k == true) {
        cout << 1;
    }
    else {
        cout << 0;
    }

    return 0;
}