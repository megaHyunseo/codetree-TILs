#include <iostream>
using namespace std;

int main() {
    
    int n;
    int cnt = 0;

    cin >> n;

    while(1) {

        if(n >= 1000) {
            break;
        }
        if(n % 2 == 0) {
            n = n * 3 + 1;
        }   
        else {
            n = n * 2 + 2;
        }
        cnt++;
    }

    cout << cnt;
    
    return 0;
}