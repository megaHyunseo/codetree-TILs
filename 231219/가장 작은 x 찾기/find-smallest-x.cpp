#include <iostream>

using namespace std;

int n;
int a[10];
int b[10];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }

    int x;
    for(x=1; x<=10000; x++){
        int tempx = x;
        bool flag = true;
        for(int i=0; i<n; i++){
            tempx *= 2;
            if(!(tempx >= a[i] && tempx <= b[i])){
                flag = false;
            }
        }
        if(flag) break;
    }
    cout << x;
    
    return 0;
}