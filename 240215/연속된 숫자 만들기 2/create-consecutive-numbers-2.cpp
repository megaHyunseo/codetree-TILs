#include <iostream>

using namespace std;

int arr[3];

bool is_seq(int *arr){
    for(int i = 1; i < 3; i++){
        if(arr[i-1] + 1 != arr[i]){
            return false;
        }
    }
    return true;
}

void move(int *arr){
    //두 사람의 위치가 2 차이가 날 경우
    if(arr[0] + 2 == arr[1]){
        arr[2] = arr[1];
        arr[1] = arr[0] + 1;
    //위의 조건에 해당 안될 때
    }else if(arr[1] + 2 == arr[0]){
        arr[2] = arr[1];
        arr[1] = arr[0] + 1;
    }
    else{
        arr[0] = arr[1] + 2;
        int temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;
    }
}

int main() {
    for(int i = 0; i < 3; i++){
        cin >> arr[i];
    }

    int cnt = 0;

    while(!is_seq(arr)){
        move(arr);
        cnt++;
    }

    cout << cnt;

    return 0;
}