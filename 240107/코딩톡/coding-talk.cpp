#include <iostream>
#define MAX_M 100
#define MAX_N 26

using namespace std;

int n, m, p;
char c[MAX_M+1];
int u[MAX_M+1];
int check[MAX_N+1];

int main() {
    cin >> n >> m >> p;
    for(int i = 0; i < m; i++){
        cin >> c[i] >> u[i];
    }

    if(u[p - 1] == ){
        return 0;
    }

    for(int i = p - 1; i < m; i++){
        char x = c[i];
        check[(int)(x - 65)] = 1;
    }
    
    for(int i = 0; i < n; i++){
        if(check[i] == 0){
            cout << (char)(i + 65) << " ";
        }
    }
    return 0;
}