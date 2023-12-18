#include <iostream>
using namespace std;

int main() {
    
    int n;

    cin >> n;

    if(n == 1) {
        cout << "John";
    }
    else if(n == 2) {
        cout << "Tom";
    }
    else {
        cout << "Paul";
    }
    return 0;
}