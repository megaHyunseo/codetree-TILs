#include <iostream>
#include <algorithm>
#include <climits>

#define MAXN 100
using namespace std;

int n, k;
int arr[MAXN];

bool isAvailable(int max_val){
    int available_indices[n] = {};
    int cnt = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] <= max_val){
            available_indices[cnt++] = i;
        }
    }

    for(int i = 1; i < cnt; i++){
        int dist = available_indices[i] - available_indices[i - 1];
        if(dist > k){
            return false;
        }
    }
    return true;
}

int main() {
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = INT_MAX;
    for(int a = max(arr[0], arr[n]); a <= MAXN; a++){
        if(isAvailable(a)){
            ans = min(ans, a);
        }
    }
    cout << ans;

    return 0;
}