#include <iostream>
#define MAX_N 100
#define MAX_BOMB 1000000
using namespace std;

int n, k;
int arr[MAX_N];
bool explode[MAX_N];
int bomb[MAX_BOMB];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(j-i > k){
                break;
            }
            if(arr[i] != arr[j]){
                continue;
            }
            if(explode[i] == false){
                bomb[arr[i]]++;
                explode[i] = true;
            }
            if(explode[j] == false){
                bomb[arr[j]]++;
                explode[j] = true;
            }
        }
    }

    int max_val = 1;
    int max_idx = 0;
    for(int i=0; i<MAX_BOMB; i++){
        if(max_val <= bomb[i]){
            max_val = bomb[i];
            max_idx = i;
        }
    }
    cout << max_idx;
    return 0;
}