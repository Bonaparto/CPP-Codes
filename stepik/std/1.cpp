#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    vector <int> l;
    for(int i = 0; i < n; ++i){
        cin >> x;
        l.push_back(x);
    }
    sort(l.begin(), l.end());
    for(int i = 0; i < n; ++i){
        cout << l[i] << " ";
    }
}