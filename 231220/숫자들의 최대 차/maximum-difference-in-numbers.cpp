#include <iostream>
#include <algorithm>

#define MAX_N 1000
#define MAX_NUM 10000

int n, k;
int arr[MAX_N];

using namespace std;

int countNum(int l, int r){
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(arr[i] >= l && arr[i] <= r){
            cnt++;
        }
    }
    return cnt;
}

int main() {
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int ans = 0;
    for(int i=1; i<=MAX_NUM; i++){
        ans = max(ans, countNum(i, i+k));
    }
    cout << ans;
    return 0;
}