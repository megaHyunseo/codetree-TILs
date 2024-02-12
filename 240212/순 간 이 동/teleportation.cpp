#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int A, B, x, y;

int main() {
    cin >> A >> B >> x >> y;

    //A -> B
    int dis1 = abs(B - A);

    //A -> x -> y -> B
    int dis2 = abs(x - A) + abs(B - y);

    //A -> y -> x -> B
    int dis3 = abs(y - A) + abs(B - x);

    int ans = min(dis1, dis2);
    ans = min(ans, dis3);
    
    cout << ans;
    return 0;
}