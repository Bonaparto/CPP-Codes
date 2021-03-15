#include <iostream>
using namespace std;
int main(){
    int a[5][2], cnt = 0;
    for(int i = 0; i < 5; ++i){
        for(int j = 0; j < 2; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < 5; ++i){
        for(int j = 0; j < 5; ++j){
            int x = i * 25;
            if(((x - a[j][0]) * (x - a[j][0]) + a[j][1] * a[j][1]) <= 100){
                cnt++;
                break;
            }
        }
    }
    cout << cnt;
}