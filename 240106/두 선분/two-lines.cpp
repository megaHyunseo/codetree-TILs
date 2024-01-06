#include <iostream>
using namespace std;

int x1, x2, x3, x4;

int main() {
    cin >> x1 >> x2 >> x3 >> x4;
    //안 겹치는 경우로 생각하기
    
    /*
    if(x2 < x3 || x4 < x1){
        cout << "nonintersecting";
    }else{
        cout << "intersecting";
    }
    */

    //겹치는 경우로 생각하기
    if(x2 > x3 && x4 > x2){
        cout << "intersecting";
    }else if(x2 > x4 && x1 > x3){
        cout << "intersecting";
    }else if(x4 < x1 && x2 > x4){
        cout << "intersecting";
    }else if(x2 > x3 && x3 > x1){
        cout << "intersecting";
    }else{
        cout << "nonintersecting";
    }
    return 0;
}