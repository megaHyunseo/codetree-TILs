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

    int ans = 0;

    //i, j 두 명이 팀이 되었을 때
    for(int i = 1; i <= MAX_X; i++){
        for(int j = i + 1; j <= MAX_X; j++){
            bool win = false;

            int score_i = 0, score_j = 0;

            // 가로줄 빙고
            for(int k = 0; k < MAX_A; k++){
                score_i = 0, score_j = 0;
                for(int l = 0; l < MAX_A; l++){
                    if(arr[k][l] == i){
                        score_i++;
                    }
                    if(arr[k][l] == j){
                        score_j++;
                    }
                }
                if(score_i + score_j == 3 && score_i >= 1 && score_j >= 1){
                    win = true;
                }
            }

            // 세로줄 빙고
            for(int k = 0; k < MAX_A; k++){
                score_i = 0, score_j = 0;
                for(int l = 0; l < MAX_A; l++){
                    if(arr[l][k] == i){
                        score_i++;
                    }
                    if(arr[l][k] == j){
                        score_j++;
                    }
                }
                if(score_i + score_j == 3 && score_i >= 1 && score_j >= 1){
                    win = true;
                }
            }

            //왼->오 대각선
            score_i = 0, score_j = 0;
            for(int k = 0; k < MAX_A; k++){
                if(arr[k][k] == i){
                    score_i++;
                }
                if(arr[k][k] == j){
                    score_j++;
                }
            }
            if(score_i + score_j == 3 && score_i >= 1 && score_j >= 1){
                win = true;
            }

            score_i = 0, score_j = 0;
            for(int k = 0; k < MAX_A; k++){
                if(arr[k][MAX_A - k - 1] == i){
                    score_i++;
                }
                if(arr[k][MAX_A - k - 1] == j){
                    score_j++;
                }
            }
            if(score_i + score_j == 3 && score_i >= 1 && score_j >= 1){
                win = true;
            }

            if(win) ans++;
        }

    }
    cout << ans;

    return 0;
}