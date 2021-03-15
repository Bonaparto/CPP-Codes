#include <bits/stdc++.h>
using namespace std;

struct point{
    long double x, y;
};

int main(){
    int n;
    cin >> n;
    point a[n];
    for(int i = 0; i < n; ++i) cin >> a[i].x >> a[i].y;
    long double max = -1000000001, min = 1000000001;
    int c, c1, b, b1;
    for(int i = 0; i < n - 1; ++i){
        for(int j = i + 1; j < n; ++j){
            long double distance = sqrt((a[i].x - a[j].x) * (a[i].x - a[j].x) + (a[i].y - a[j].y) * (a[i].y - a[j].y));
            if(distance < min){
                min = distance;
                c = i + 1; c1 = j + 1;
            }
            if(distance > max){
                max = distance;
                b = i + 1; b1 = j + 1;
            }
        }
    }
    cout << c << " " << c1 << endl;
    cout << b << " " << b1;
}