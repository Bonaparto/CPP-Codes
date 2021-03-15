#include<iostream>
#include<string>
using namespace std;
long long ftd(string s){
    long long i, n = 0;
    for(i = 0; i < s.size(); i++)
        n = n * 3 + s [i] - '0';
    return n;
}
int main(){
    string p, q;
    cin >> p >> q;
    cout << ftd(p) + ftd(q);
}