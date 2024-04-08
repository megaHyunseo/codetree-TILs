#include <iostream>
using namespace std;

int main() {
    
    int n;
    bool k = false;

    cin >> n;
    
    for(int i = 2 ; i < n ; i ++) {
        
        if(n % i == 0) {
            k = true;
        }
    }

    if(k == true) {
        cout << "C";
    }
    else {
        cout << "N";
    }
    
    return 0;
}