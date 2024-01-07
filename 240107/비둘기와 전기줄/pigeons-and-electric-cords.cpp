#include <iostream>
#include <algorithm>

using namespace std;

int n;
bool arr[11] = {false, };

int main() {
    cin >> n;
    int x, y;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if(arr[x] == false){
            arr[x] = true;
        }else{
            if(arr[x] != y){
                cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}