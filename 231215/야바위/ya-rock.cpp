#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[3][100];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;  

    for(int i=0; i<n; i++){
        cin >> arr[0][i] >> arr[1][i] >> arr[2][i];   
    }

    int ans = 0;
    int i, j = 0;
    for(i=0; i<3; i++){
        int cup[3] = {};
        int cnt = 0;
        cup[i] = 1;
        for(j=0; j<n; j++){
            swap(cup[arr[0][j]], cup[arr[1][j]]);
            if(cup[arr[2][j]] == 1){
                cnt++;
            }
        }
        ans = max(ans, cnt);
        cup[arr[i][j]] = 0;
    }
    
    cout << ans;
    return 0;
}