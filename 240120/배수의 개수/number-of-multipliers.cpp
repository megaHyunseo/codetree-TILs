#include <iostream>
using namespace std;

int main() {
    
    int cnt3 = 0, cnt5 = 0;
    int k;

    for(int i = 1 ; i <= 10 ; i++) {
        
        cin >> k;

        if(k % 3 == 0) {
            cnt3++;
        }
        if(k % 5 == 0) {
            cnt5++;
        }
    }
    cout << cnt3 << " " << cnt5;
    return 0;
}