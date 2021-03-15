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
        n.push_back(x);
    }
    sort(n.begin(), n.end());
    cin >> k;
    for(int i = 0; i < k; ++i){
        sum += n[n.size() - i - 1];
    }
    cout << sum;
}   