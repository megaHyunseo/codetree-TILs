#include <iostream>
#include <algorithm>

#define MAX_N 100
#define MAX_NUM 10
#define UNDEFINED -1

using namespace std;

int n;
int pigeon[MAX_N+1], move_dir[MAX_N+1], pos[MAX_NUM+1];

int main() {
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> pigeon[i] >> move_dir[i];
    }
    for(int i = 1; i <= MAX_NUM; i++){
        pos[i] = UNDEFINED;
    }

    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(pos[pigeon[i]] == UNDEFINED){
            pos[pigeon[i]] = move_dir[i];   
        }else{
            if(pos[pigeon[i]] != move_dir[i]){
                pos[pigeon[i]] = move_dir[i];
                cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}