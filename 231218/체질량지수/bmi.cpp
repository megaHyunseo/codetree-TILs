#include <iostream>
using namespace std;

int main() {
    
    int cm, kg, bmi;

    cin >> cm >> kg;

    bmi = kg * 100 * 100 / (cm * cm);
    cout << bmi << "\n";

    if (bmi >= 25) {
        cout << "Obesity";
    }
    return 0;
}