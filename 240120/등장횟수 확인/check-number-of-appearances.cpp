#include <iostream>
using namespace std;

int main() {
    
    int cnt = 0;
    int k;

    for(int i = 0 ; i < 5 ; i++) {

        cin >> k;
        
        if(k % 2 == 0) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}