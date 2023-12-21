#include <iostream>
using namespace std;

int main() {
    
    char a, b, c;
    int a_1, b_1, c_1;
    int cnt = 0;

    cin >> a >> a_1;
    cin >> b >> b_1;
    cin >> c >> c_1;

    if(a == 'Y') {
        if(a_1 >= 37) {
            cnt++;
        }
    }
    if(b == 'Y') {
        if(b_1 >= 37) {
            cnt++;
        }
    }
    if(c == 'Y') {
        if(c_1 >= 37) {
            cnt++;
        }
    }

    if(cnt >= 2) {
        cout << 'E';
    }
    else {
        cout << 'N';
    }
    return 0;
}