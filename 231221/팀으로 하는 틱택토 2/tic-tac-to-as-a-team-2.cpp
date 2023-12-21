#include <iostream>
#include <string>

#define MAX_A 3
#define MAX_X 9

using namespace std;

string inp[MAX_A];
int arr[MAX_A][MAX_A];

int main() {
    // 여기에 코드를 작성해주세요.

    for(int i = 0; i < MAX_A; i++)
        cin >> inp[i];
    
    for(int i = 0; i < MAX_A; i++)
        for(int j = 0; j < MAX_A; j++)
            arr[i][j] = inp[i][j] - '0';

    int cnt = 0;

    // 가로줄, 세로줄 검사
    for(int i=0; i<3; i++){
        // 가로줄 검사
        if(arr[i][0] == arr[i][1] && arr[i][0] != arr[i][2]){
            cnt++;
        }else if(arr[i][1] == arr[i][2] && arr[i][1] != arr[i][0]){
            cnt++;
        }else if(arr[i][0] == arr[i][2] && arr[i][0] != arr[i][1]){
            cnt++;
        }

        // 세로줄 검사
        if(arr[0][i] == arr[1][i] && arr[0][i] != arr[2][i]){
            cnt++;
        }else if(arr[1][i] == arr[2][i] && arr[1][i] != arr[0][i]){
            cnt++;
        }else if(arr[0][i] == arr[2][i] && arr[0][i] != arr[1][i]){
            cnt++;
        }
    }

    // 대각선 검사
    if(arr[0][0] == arr[1][1] && arr[0][0] != arr[2][2]){
        cnt++;
    }else if(arr[0][0] == arr[2][2] && arr[0][0] != arr[1][1]){
        cnt++;
    }else if(arr[1][1] == arr[2][2] && arr[1][1] != arr[0][0]){
        cnt++;
    }

    if(arr[0][2] == arr[1][1] && arr[0][2] != arr[2][0]){
        cnt++;
    }else if(arr[1][1] == arr[2][0] && arr[1][1] != arr[0][2]){
        cnt++;
    }else if(arr[0][2] == arr[2][0] && arr[0][2] != arr[1][1]){
        cnt++;
    }

    cout << cnt;
    return 0;
}