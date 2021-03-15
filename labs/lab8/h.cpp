#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> n;
    int l, x ,k;
    cin >> l;
    for(int i = 0; i < l; ++i){
        cin >> x;
        n.push_back(x);
    }
    cin >> k;
    sort(n.begin(), n.end());
    for(int i = 0; i < k; ++i){
        cout << n[i] << " ";
    }
}