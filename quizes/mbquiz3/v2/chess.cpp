#include <iostream>
using namespace std;

void table(int a, int b){
    int c[a][b];
    for(int i = 0; i < a; ++i){
        for(int j = 0; j < b; ++j){
            if((i + j) % 2 == 0)
            c[i][j] = 1;
            else c[i][j] = 0;
        }
    }
    for(int i = 0; i < a; ++i){
        for(int j = 0; j < b; ++j){
            cout << c[i][j];
        }
        cout << endl;
    }
}

int main(){
    int x,y;
    cin >> x >> y;
    table(x, y);
}