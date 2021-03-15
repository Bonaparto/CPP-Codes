#include <iostream>
using namespace std;

int sort(int *v, int n){
    for(int i = 0; i < n - 1; ++i){
        for(int j = i; j < n; ++j){
            if(v[i] > v[j]){
                v[i] = v[j] + v[i];
                v[j] = v[i] - v[j];
                v[i] = v[i] - v[j];
            }
        }
    }
    return(*v);
}

int time(int *a, int n){
    for(int i = 0; i < n; ++i){
        int t = 0, l = 3600;
        for(int j = 0; j < 3; ++j){
            int x;
            cin >> x;
            t += l * x;
            l /= 60;
        }
        a[i] = t;
    }
    return (*a);
}

int main() {
    int n;
    cin >> n;
    int a[n] = {0};
    time(a, n);
    sort(a, n);
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 3; ++j){
            if(j == 0) cout << a[i] / 3600 << " ";
            if(j == 1) cout << (a[i] / 60) % 60 << " ";
            if(j == 2) cout << a[i] % 60;
        }
        cout << endl;
    }
}