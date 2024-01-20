#include <iostream>
using namespace std;

int main() {
    
    int cnt = 0;
    int k;

    for(int i = 1 ; i <= 10 ; i++) {
        cin >> k;
        if(k % 2 == 1) {
            cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}