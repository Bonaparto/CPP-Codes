#include <iostream>
#include <algorithm>
using namespace std;

bool palornot(string a){
    string l = a;
    reverse(a.begin(), a.end());
    return a == l;
}

int main(){
    int n;
    cin >> n;
    string a[n];
    bool b[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        b[i] = palornot(a[i]);
    }
    for(int i = 0; i < n; ++i){
        cout << (b[i]?"Yes":"No") << endl;
    }
}