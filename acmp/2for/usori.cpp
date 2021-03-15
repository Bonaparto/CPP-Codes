#include <iostream>
using namespace std;
int main(){
    char a[4][4];
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            if((a[i][j] == 'B' && a[i][j+1] == 'B' && a[i+1][j] == 'B' && a[i+1][j+1] == 'B') ||
            (a[i][j] == 'W' && a[i][j+1] == 'W' && a[i+1][j] == 'W' && a[i+1][j+1] == 'W')){
                cout << "No";
                return 0;
            }
        }
    }
    cout << "Yes";
}