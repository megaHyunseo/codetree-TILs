#include <iostream>

#define MAX_N 100

using namespace std;

int n;
int x1[MAX_N], x2[MAX_N];

int main() {
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x1[i] >> x2[i];
    }

    int cnt = 0;
    
    for(int i = 0; i < n; i++){
        bool flag = false;
        for(int j = 0; j < n; j++){
            if(i == j) continue;

            if((x1[i] <= x1[j] && x2[i] >= x2[j]) || (x1[i] >= x1[j] && x2[i] <= x2[j])){
                flag = true;
                break;
            }
        }
        if(flag == false){
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}