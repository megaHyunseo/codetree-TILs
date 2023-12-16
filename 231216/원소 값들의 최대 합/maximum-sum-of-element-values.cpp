#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int arr[100];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        int sum = 0;
        int temp = arr[i];
        for(int i=0; i<m; i++){
            sum += temp;
            temp = arr[temp-1];
        }
        ans = max(sum, ans);
    }

    cout << ans;
    return 0;
}