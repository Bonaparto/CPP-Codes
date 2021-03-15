#include <bits/stdc++.h>
using namespace std;

long long n;

long long power(){
    n -= 1;
    if(n == -1 || n == 0) return 1;
    long long l = 1;
    for(int i = 0; i < n + 1; ++i){
        l *= n + 1;
    }
    return l;
}

int main(){
    cin >> n;
    vector <long long> m(n + 1);
    generate(m.begin(), m.end(), power);
    for(long long i = m.size() - 1; i >= 0; --i){
        cout << m[i] << " ";
    }
}