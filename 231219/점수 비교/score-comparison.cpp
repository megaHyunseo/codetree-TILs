#include <iostream>
using namespace std;

int main() {
    
    int a_m, a_e;
    int b_m, b_e;

    cin >> a_m >> a_e;
    cin >> b_m >> b_e;

    if(a_m > b_m && a_e > b_e) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}