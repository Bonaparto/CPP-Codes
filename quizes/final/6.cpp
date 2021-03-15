#include <bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        string x, y;
        cin >> x >> y;
        int z = 1, cnt = 0;
        for(int j = 0; j < x.size(); ++j){
            cnt += ((x[j] - 48) * z);
            z *= 10;
        }
        int a = 1, cnt1 = 0;
        for(int k = 0; k < y.size(); ++k){
            cnt1 += ((y[k] - 48) * a);
            a *= 10;
        }
        int cntt = cnt1 + cnt;
        stringstream ss;
        ss << cntt;
        string str = ss.str();
        reverse(str.begin(), str.end());
        bool b = 0;
        for(int l = 0; l < str.size(); ++l){
            if(str[l] != '0') b = 1; 
            if(b) cout << str[l];
        }
        cout << endl;
    }
}