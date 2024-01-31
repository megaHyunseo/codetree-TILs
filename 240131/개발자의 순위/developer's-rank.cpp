#include <iostream>

#define MAX_K 10
#define MAX_N 20

using namespace std;

int k, n;
int arr[MAX_K][MAX_N];

int main() {
    cin >> k >> n;

    for(int i = 0; i < k; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int ans = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i == j) continue;
            
            int a, b;
            int cnt = 0;
            for(int w = 0; w < k; w++){    
                for(int l = 0; l < n; l++){
                    if(arr[w][l] == i){
                        a = l;
                    }
                    if(arr[w][l] == j){
                        b = l;
                    }
                }
                if(a > b) cnt++;
            }
            if(cnt == k){
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}