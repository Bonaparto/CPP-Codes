#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, l = 0;
    cin >> n;
    set <int> s;
    int b[n];
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        if(s.insert(x).second){
            b[l] = x;
            l++;
        }
    }
    int a[s.size()];
    for(int i = 0; i < s.size(); ++i){
        a[i] = b[i];
    }
    int len = sizeof(a) / sizeof(int);
    do{
        for(int i = 0; i < len; ++i){
            cout << a[i] << " ";
        }
        cout << endl;
    } while(next_permutation(a, a + len));
}