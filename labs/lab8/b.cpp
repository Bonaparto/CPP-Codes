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
    reverse(n.begin(), n.end());
    for(int i = 0; i < n.size(); ++i){
        cout << n[i] << " ";
    }
}