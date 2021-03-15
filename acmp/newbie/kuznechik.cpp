#include <iostream>
using namespace std;
int main(){
    int n, x, y, l;
    cin >> n >> x >> y >> l;
    int a[n][2];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 2; ++j){
          cin >> a[i][j];
        }
        if(((x - a[i][0]) * (x - a[i][0]) + (y - a[i][1]) * (y - a[i][1])) <= l * l ){
            cout << i + 1;
            return 0;
        }
    }
    cout << "Yes";
}