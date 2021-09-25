#include <bits/stdc++.h>
using namespace std;

void solve() {
    
}

int main() {
    int n, cnt = 0, l = 0;
    cin >> n;
    int a[n];
    bool b[n];
    vector <int> v;
    for(int i = 0; i < n; ++i) b[i] = 0;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        b[a[i]-1] = 1;
        if(a[i] == 0) cnt++;
    }

    for(int i = 0; i < n; ++i) {
        if(cnt == 2) {
            for(int j = i; j < n; ++j) {
                if(b[j] == 0) {
                    for(int k = l; k < n; ++k) {
                        if(a[k] == 0 && b[k] == 0) {
                            a[k] = j + 1;
                            break;
                        }
                    }
                }
            }
        }
        if(b[i] == 0) {
            for(int j = l; j < n; ++j) {
                if(a[j] == 0) {
                    a[j] = i + 1;
                    b[i] = 1;
                    cnt--;
                    l = j;
                    break;
                }
            }
        }
    }
    for(int i = 0; i < n; ++i) cout << a[i] << " ";
    cout << endl;
}