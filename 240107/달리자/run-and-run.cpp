#include <iostream>
#include <algorithm>
#include <climits>

#define MAX_N 100

using namespace std;

int n, ans;
int home[MAX_N+1];
int moved_home[MAX_N+1];

int main() {
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> home[i];
    }
    for(int i = 0; i < n; i++){
        cin >> moved_home[i];
    }

    for(int i = 0; i < n; i++){
        if(home[i] > moved_home[i]){
            int num = home[i] - moved_home[i];
            home[i] -= num;
            home[i + 1] += num;
            ans += num;
        }
    }
    cout << ans;
    return 0;
}