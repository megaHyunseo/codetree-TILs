#include <iostream>
using namespace std;

int main() {
    
    int a = 5, b = 6, c = 7, temp = 0;

    temp = a;
    a = c; // c → a
    c = b; // b → c
    b = temp; // temp(a) → b

    cout << a << endl << b << endl << c;
    return 0;
}