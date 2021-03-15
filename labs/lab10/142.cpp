#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    int len = sizeof(a) / sizeof(int);
    sort(a, a + len);
    do{ 
        vector <int> x, y;
        for(int i = 0; i < len; ++i) x.push_back(a[i]);
        y = x;
        reverse(x.begin(), x.end());
        if(x == y){
            for(int i = 0; i < x.size(); ++i) cout << x[i] << " ";
            return 0;
        }
    } while(next_permutation(a, a + len));
    cout << "Impossible";
}