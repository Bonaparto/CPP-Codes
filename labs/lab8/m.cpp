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
    for(int i = 0; i < n.size(); ++i){
        int cnt = 0;
        for(int j = i; j < n.size(); ++j){
            if(n[j] == n[i])
            cnt++;
        }
        if(cnt < 2) sum += n[i];
    }
    cout << sum;
}   