#include <iostream>
#include <algorithm>

#define MAX 100

using namespace std;

int n, k;
int arr[MAX];

int main() {
    cin >> n >> k;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = -1;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                if(j - i <= k){
                    ans = max(ans, arr[i]);
                }
            }
        }
    }
    cout << ans;
    return 0;
}