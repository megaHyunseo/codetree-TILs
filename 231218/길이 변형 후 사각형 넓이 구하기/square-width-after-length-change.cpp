#include <iostream>
using namespace std;

int main() {
   
   int w, h;

   cin >> w >> h;

   w += 8;
   h *= 3;
   
   cout << w << "\n";
   cout << h << "\n";
   cout << w * h;
   
   return 0;
}