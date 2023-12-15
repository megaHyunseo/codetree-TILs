#include <iostream>
#include <algorithm>
#include <climits>

#define MAX 100

using namespace std;

int n;
int xarr[MAX], yarr[MAX];

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> xarr[i] >> yarr[i];
    }

    int ans = INT_MAX;
    for(int x=0; x<=MAX; x+=2){
        for(int y=0; y<=MAX; y+=2){
            int m = 0;

            //1사분면
            int cnt = 0;
            for(int i=0; i<n; i++){
                if(xarr[i] < x && yarr[i] < y){
                    cnt++;
                }
            }
            m = max(m, cnt);
            //2사분면
            cnt = 0;
            for(int i=0; i<n; i++){
                if(xarr[i] < x && yarr[i] > y){
                    cnt++;
                }
            }
            m = max(m, cnt);
            //3사분면
            cnt = 0;
            for(int i=0; i<n; i++){
                if(xarr[i] > x && yarr[i] > y){
                    cnt++;
                }
            }
            m = max(m, cnt);
            //4사분면
            cnt = 0;
            for(int i=0; i<n; i++){
                if(xarr[i] > x && yarr[i] < y){
                    cnt++;
                }
            }
            m = max(m, cnt);
            ans = min(m, ans);
        }
    }
    cout << ans;
    return 0;
}