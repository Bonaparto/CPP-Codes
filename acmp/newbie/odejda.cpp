#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n]; int b[101] = {0};
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        b[a[i]]++;
    }
    int max = 0, max1 = 0, ch;
    for(int i = 1; i <= 100; ++i){
        if(b[i] >= max){
            max = b[i];
            ch = i;
        }
    }
    for(int i = 1; i <= 100; ++i){
        if(b[i] > max1){
            max1 = b[i];
            if(max1 == max){
                if(ch == i){ cout << i; return 0;}
                else{ cout << 0; return 0;}
            }
        }
    }
    cout << ch;
}