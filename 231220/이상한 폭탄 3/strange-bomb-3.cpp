#include <iostream>
#define MAX_N 100
using namespace std;

int n, k;
int arr[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        int cnt = 0;
        for(int j=0; j<n; j++){
            if(i == j) continue;

            if(arr[i] == arr[j] && i-j <= k){
                cnt++;
            }
        }
        ans = max(ans, cnt);
    }

    cout << ans;
    return 0;
}