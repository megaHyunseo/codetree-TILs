#include <iostream>
#include <climits>
#include <cstdlib>
#include <algorithm>

#define MAX_N 5

using namespace std;

int n = MAX_N;
int arr[MAX_N];

int Diff(int i, int j, int k, int l) {
    int total_sum = 0;
    for(int l = 0; l < n; l++)
        total_sum += arr[l];
    
    // 세 번째 팀원의 합은 전체에서 첫 번째 팀원과 두 번째 팀원의 합을 빼서 구하기
    int sum1 = arr[i] + arr[j];
	int sum2 = arr[k] + arr[l];
    int sum3 = total_sum - sum1 - sum2;

    //모든 팀의 능력치가 서로 다르게 묶였는지 확인
    if(sum1 == sum2 || sum2 == sum3 || sum1 == sum3){
        return -1;
    }
	
	// 세 팀의 차이 중 최댓값을 리턴
	int ret = abs(sum1 - sum2);
	ret = max(ret, abs(sum2 - sum3));
	ret = max(ret, abs(sum3 - sum1));
	
    return ret;
}

int main() {
    // 팀원 입력받기
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    // 첫 번째 팀원을 만들어줍니다.
    int min_diff = INT_MAX;
    bool flag = true;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
			
			// 두 번째 팀원을 만들어줍니다.
            for(int k = 0; k < n; k++){
				for(int l = k + 1; l < n; l++) {
                    //첫 번째 팀원과 두 번째 팀원이 겹치는지 여부를 확인합니다.
					if(k == i || k == j || l == i || l == j){
						continue;
                    }
                    if(Diff(i, j, k, l) != -1){
                        min_diff = min(min_diff, Diff(i, j, k, l));
                        flag = false;
                    }
				}
            }
        }
    }
    if(flag){
        cout << -1;
    }else{
        cout << min_diff;
    }
    return 0;
}