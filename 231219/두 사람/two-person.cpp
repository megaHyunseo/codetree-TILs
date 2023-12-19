#include <iostream>
using namespace std;

int main() {
    
    int a_old, b_old;
    char a_sex, b_sex;

    cin >> a_old >> a_sex;
    cin >> b_old >> b_sex;

    if((a_old >= 19 && a_sex == 'M') || (b_old >= 19 && b_sex == 'M')) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}