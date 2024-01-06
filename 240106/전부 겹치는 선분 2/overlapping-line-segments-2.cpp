#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int n;
int x1[100];
int x2[100];

int main() {
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x1[i] >> x2[i];
    }

    bool flag = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ; j++){
            if(i == j) continue;

            int max_x1;
            int min_x2 = INT_MAX;

            for(int k = i; k < j; k++){
                max_x1 = max(max_x1, x1[k]);
                min_x2 = min(min_x2, x2[k]);
            }

            if(max_x1 <= min_x2){
                cout << "Yes";
                flag = true;
                break;
            } 
        }
        if(flag == false){
            cout << "No";
        }else{
            break;
        }
    }
    
    
    
    
    return 0;
}