#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> n;
    int l, x;
    cin >> l;
    for(int i = 0; i < l; ++i){
        cin >> x;
        n.push_back(x);
    }
    sort(n.begin(), n.end());
    if(n.size() == 1) cout << n[0];
    else cout << n[n.size() - 1] - n[0];
}