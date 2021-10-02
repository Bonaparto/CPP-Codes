#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    int s_p = ceil(n * 0.7);
    int m_p = floor((float((n - m + k)) / n) * 100);
    //cout << s_p << endl;
    if(n - m + k < s_p) s_p = -1;
    if(s_p == -1) cout  << s_p;
    else cout << (s_p - k > 0 ? s_p - k : 0);
    if(n - m + k == n) m_p = 100;
    cout << endl << m_p;
}