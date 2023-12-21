#include <iostream>
#define MAXN 1000
using namespace std;

int n;
int arr[MAXN];
int res[MAXN];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i=0; i<n-1; i++){
        cin >> arr[i];
    }

    for(int i=1; i<=n; i++){
        res[0] = i;
        for(int j=1; j<n; j++){
            res[j] = arr[j-1] - res[j-1];
        }

        bool satisfied = true;
        bool exist[MAXN+1] = {};
        for(int j=0; j<n; j++){
            if(res[j] <= 0 || res[j] > n){
                satisfied = false;
            }else{
                if(exist[res[j]]){
                    satisfied = false;
                }
                exist[res[j]] = true;
            }
        }

        if(satisfied){
            for(int j=0; j<n; j++){
                cout << res[j] << " ";
            }
        }
    }

    
    return 0;
}