#include <iostream>
using namespace std;
int main() {
    int a, n, one[1000]{0};
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        one[a - 1]++;
    }
    int max = 0;
    for(int i = 0; i < 1000; i++){
        if(one[max] < one[i]) max = i;
    }
    for(int i = 999; i >= 0; i--){
        if(one[i] == one[max])
        cout << i + 1 << ' ';
    }
}