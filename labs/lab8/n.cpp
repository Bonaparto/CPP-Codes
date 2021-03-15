#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> n;
    int l, x, k, sum = 0;
    cin >> l;
    for(int i = 0; i < l; ++i){
        cin >> x;
        if(x % 2 != 0)
        n.push_back(x);
    }
    sort(n.begin(), n.end());
    for(int i = 0; i < n.size(); ++i){
        if(n[i] != n[i-1])
        cout << n[i] << " ";
    }
}   