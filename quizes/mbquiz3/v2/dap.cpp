#include <iostream>
using namespace std;

void seen(int *a){
    int l;
    cin >> l;
    int b[l][2];
    for(int i = 0; i < l; ++i){
        for(int j = 0; j < 2; ++j){
            cin >> b[i][j];
        }
    }
    for(int i = 0; i < l; ++i){
        int cnt = 0;
        int max = 0;
        for(int j = b[i][0]; j <= b[i][1]; ++j){
            if(max < a[j]){
                cnt++;
                max = a[j];
            }
        }
        cout << cnt << endl;
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    seen(a);
}