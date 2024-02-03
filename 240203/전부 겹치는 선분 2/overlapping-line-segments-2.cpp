#include <iostream>
#include <algorithm>
#include <climits>

#define MAXN 100

using namespace std;

int n;
int x1[MAXN + 1], x2[MAXN + 1];

int main() {
    cin >> n;

    //각 선분 입력
    for(int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    bool flag = false;

    // i번 선분을 제외하고 시작점 중 가장 뒤에 있는 좌표와 끝점 중 가장 앞에 있는 점의 좌표를 확인.
    for(int i = 0; i < n; i++){
        int max_x1 = INT_MIN;
        int min_x2 = INT_MAX;
        
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            
            // 만약 어느 한 선분이라도 시작점이 다른 선분의 끝점보다 뒤에 온다면
            // 선분이 전부 겹칠 수 없음.
            max_x1 = max(max_x1, x1[j]);
            min_x2 = min(min_x2, x2[j]);
        }

        if(min_x2 >= max_x1){
            flag = true;
        }
    }

    if(flag){
        cout << "Yes";
    }else{
        cout << "No";
    }
    
    return 0;
}