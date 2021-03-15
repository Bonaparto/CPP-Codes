#include <iostream>

using namespace std;

int a[1000][1000];

int main() {

    int n;
    cin >> n;
    int i = 0, j = 0, dir = 0;
    int sum = n * n, cnt = 1;
    while (sum) {
        if (dir == 0){
            while (dir == 0) {
                a[i][j] = cnt++;
                sum--;
                if (j + 1 < n && a[i][j + 1] == 0)j++;
                else break;
            }
            dir ++;
            i++;
        }
        else if (dir == 1){
            while (dir == 1) {
                a[i][j] = cnt++;
                sum--;
                if (i + 1 < n && a[i + 1][j] == 0)i++;
                else break;
            }
            dir ++;
            j--;
        }
        else if (dir == 2){
            while (dir == 2) {
                a[i][j] = cnt++;
                sum--;
                if (j > 0 && a[i][j - 1] == 0)j--;
                else break;
            }
            dir ++;
            i--;
        }
        else {
            while (dir == 3) {
                a[i][j] = cnt++;
                sum--;
                if (i > 0 && a[i - 1][j] == 0)i--;
                else break;
            }
            dir = 0;
            j++;
        }
    }
    for (int i = 0; i < n; ++i) {
         for (int j = 0; j < n; ++j) {
              cout << a[i][j] << " ";
         }
         cout << endl;
    }
}