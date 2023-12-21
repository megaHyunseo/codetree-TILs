#include <iostream>
#include <algorithm>
#include <climits>
#define MAXN 100

using namespace std;

int n;
char arr[MAXN];

int getMinDis(){
    int min_dis = n;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] == '1' && arr[j] == '1'){
                min_dis = min(min_dis, j-i);
            }
        }
    }
    return min_dis;
}

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int res = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] == '0' && arr[j] == '0'){
                arr[i] = '1';
                arr[j] = '1';
                res = max(res, getMinDis());
                arr[i] = '0';
                arr[j] = '0';
            }
        }
    }
    cout << res;
    return 0;
}