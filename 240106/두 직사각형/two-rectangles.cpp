#include <iostream>
using namespace std;

int x1, x2, y1, y2, a1, a2, b1, b2;

int main() {
    // 여기에 코드를 작성해주세요.

    cin >> x1 >> y1 >> x2 >> y2;
    cin >> a1 >> b1 >> a2 >> b2;

    if(x2 < a1){
        cout << "nonoverlapping";
    }else if(a2 < x1){
        cout << "nonoverlapping";
    }else if(b2 < y1){
        cout << "nonoverlapping";
    }else if(y2 < b1){
        cout << "nonoverlapping";
    }else{
        cout << "overlapping";
    }
    return 0;
}