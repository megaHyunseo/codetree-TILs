#include <iostream>

using namespace std;

int arr[3][3];

int main() {
    // 여기에 코드를 작성해주세요.

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }

    int cnt = 0;

    // 행 별로 팀이 이길 수 있는 경우 검사
    for(int i=0; i<3; i++){
        if((arr[i][0] == arr[i][1] && arr[i][0] != arr[i][2]) ||
           (arr[i][1] == arr[i][2] && arr[i][1] != arr[i][0]) ||
           (arr[i][0] == arr[i][2] && arr[i][0] != arr[i][1])){
            cnt++;
        }
    }

    // 열 별로 팀이 이길 수 있는 경우 검사
    for(int i=0; i<3; i++){
        if((arr[0][i] == arr[1][i] && arr[0][i] != arr[2][i]) ||
           (arr[1][i] == arr[2][i] && arr[1][i] != arr[0][i]) ||
           (arr[0][i] == arr[2][i] && arr[0][i] != arr[1][i])){
            cnt++;
        }
    }

    // 대각선 검사 부분
    if((arr[0][0] == arr[1][1] && arr[0][0] != arr[2][2]) ||
       (arr[0][0] == arr[2][2] && arr[0][0] != arr[1][1]) ||
       (arr[1][1] == arr[2][2] && arr[1][1] != arr[0][0])){
        cnt++;
    }

    if((arr[0][2] == arr[1][1] && arr[0][2] != arr[2][0]) ||
       (arr[1][1] == arr[2][0] && arr[1][1] != arr[0][2]) ||
       (arr[0][2] == arr[2][0] && arr[0][2] != arr[1][1])){
        cnt++;
    }

    cout << cnt;
    return 0;
}