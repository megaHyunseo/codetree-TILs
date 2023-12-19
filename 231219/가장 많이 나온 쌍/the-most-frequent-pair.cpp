#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int a[100];
int b[100];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> m;
    for(int i=0; i<m; i++){
        cin >> a[i] >> b[i];
    }

    int ans = 0;
    for(int i=0; i<m; i++){
        int cnt = 1;
        for(int j=0; j<m; j++){
            if(i == j) continue;

            if(a[i] == a[j] && b[i] == b[j]){
                cnt++;
            }else if(a[i] == b[j] && b[i] == a[j]){
                cnt++;
            }
        }
        ans = max(ans, cnt);
    }
    
    cout << ans;
    return 0;
}