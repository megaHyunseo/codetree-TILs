#include <iostream>
#define MAXN 10
#define MAXA 100

using namespace std;

int n;
int a[MAXN], b[MAXN];

int main() {
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int k = j + 1; k < n; k++){
                // i, j, k 번 선분을 제외했을 때 모든 선분이 겹치지 않으면 cnt 1 증가
                
                bool overlap = false;
                int arr[MAXA + 1] = {};

                for(int w = 0; w < n; w++){
                    if(w == i || w == j || w == k){
                        continue;
                    }
                    for(int l = a[w]; l <= b[w]; l++){
                        arr[l]++;
                    }
                }

                for(int w = 0; w <= MAXA; w++){
                    if(arr[w] >= 2){
                        overlap = true;
                    }
                }

                if(overlap == false){
                    cnt++;
                }
            }
        }
    }

    cout << cnt;
    return 0;
}