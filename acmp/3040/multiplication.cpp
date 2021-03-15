#include <iostream>
using namespace std;
int main(){
    string a; int b;
    cin >> a >> b;
    int c[105] = {-1}, cnt = 0;
    for(int j = 0;; ++j){
        if(b == 0) break;
        for(int i = a.size() - 1; i >= 0; --i){
            int res = ((a[i] - 48) * (b % 10));
            c[a.size() - i + j - 1] += res;
        }
        b /= 10;
    }
    for(int i = 0;; ++i){
        if(c[i] == -1) break;
        c[i+1] += (c[i] / 10);
        c[i] = (c[i] % 10);
    }
    for(int i = 0;; ++i){
        if(c[i] == -1) break;
        cout << c[i];
    }
}