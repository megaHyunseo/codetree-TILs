#include <iostream>
using namespace std;

int main() {
    
    int n;
    
    cin >> n;
    
    if(n==12 || n <= 2) {
        cout << "Winter";
    }
    else if(n <= 5) {
        cout << "Spring";
    }
    else if(n <= 8) {
        cout << "Summer";
    }
    else {
        cout << "Fall";
    }
}