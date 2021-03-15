#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int lol() {
    int n;
    cin >> n;
    vector <int> f;
    for(int i = 0; i < n; ++i){
        int time = 0, l = 3600;
        for(int j = 0; j < 3; ++j){
            int x;
            cin >> x;
            time += l * x;
            l /= 60;
        }
        f.push_back(time);
    }
    sort(f.begin(), f.end());
    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 3; ++j){
            if(j == 0) cout << f[i] / 3600 << " ";
            if(j == 1) cout << (f[i] / 60) % 60 << " ";
            if(j == 2) cout << f[i] % 60;
        }
        cout << endl;
    }
}