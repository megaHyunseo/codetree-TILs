#include <iostream>
#include <algorithm>
#include <climits>

#define MAXN 100
#define MAXK 10000

using namespace std;

int n, k;
int arr[MAXN];

int main() {
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = INT_MAX;
    //구간 설정 [i, i + k]
    for(int i = 0; i < MAXK; i++){
        int cost = 0;
        for(int j = 0; j < n; j++){
            if(arr[j] < i){
                cost += abs(arr[j] - i);
            }
            if(arr[j] > i + k){
                cost += abs(arr[j] - i - k);
            }
        }
        ans = min(ans, cost);
    }
    cout << ans;

    return 0;
}