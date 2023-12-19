#include <iostream>
#include <algorithm>

using namespace std;

int n;
char arr[20];

int MinDist(){
    int min_dist = n;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] == '1' && arr[j] == '1'){
                min_dist = min(min_dist, j-i);
            }
        }
    }
    return min_dist;
}
int main() {
    
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == '0'){
            arr[i] = '1';
            ans = max(ans, MinDist());
            arr[i] = '0';
        }
    }
    cout << ans;
    return 0;
}