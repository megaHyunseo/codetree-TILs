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
    for(int i=0; i<3; i++){
        int cnt = 0;
        int cup[3] = {};
        cup[i] = 1;
        for(int j=0; j<n; j++){
            swap(cup[arr[0][j]-1], cup[arr[1][j]-1]);
            if(cup[arr[2][j]-1] == 1){
                cnt++;
            }
        }
        ans = max(ans, cnt);
    }
    
    cout << ans;
    return 0;
}