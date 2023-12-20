#include <iostream>
#include <algorithm>

#define MAXN 1000

int n, k;
int arr[MAXN];

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
    for(int i=1; i<=MAXN; i++){
        ans = max(ans, countNum(i, i+k));
    }
    cout << ans;
    return 0;
}