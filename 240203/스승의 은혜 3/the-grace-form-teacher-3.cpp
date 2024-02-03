#include <iostream>
#include <algorithm>

#define MAXN 1000

using namespace std;

int n, b;
int p[MAXN], s[MAXN];

int main() {
    cin >> n >> b;

    for(int i = 0; i < n; i++){
        cin >> p[i] >> s[i];
    }

    int max_stu = 0;
    for(int i = 0; i < n; i++){
        //학생 선물 가격을 담을 임시 배열 선언
        int arr[MAXN] = {};
        
        //학생 선물 가격을 담기
        for(int j = 0; j < n; j++){
            arr[j] = p[j] + s[j];
        }
        arr[i] = p[i]/2 + s[i]; //i번 학생의 선물 가격을 반값하기
        
        // 학생을 선물 가격 순으로 정렬
        // (선물 가격이 가장 작은 학생부터 선물을 사 줄 때, 가장 많은 학생에게 선물을 줄 수 있음)
        sort(arr, arr+n);

        int sum = 0, stu = 0;
        for(int j = 0; j < n; j++){
            if(sum + arr[j] > b){
                break;
            }
            sum += arr[j];
            stu++;
        }
        max_stu = max(max_stu,stu);
    }

    cout << max_stu;

    return 0;
}