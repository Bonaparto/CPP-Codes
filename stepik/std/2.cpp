#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int x, n, y, cnt = 0;
    cin >> x >> n;
    vector <int> l;
    for(int i = 0; i < n; ++i){
        cin >> y;
        l.push_back(y);
    }
    sort(l.begin(), l.end());
    for(int i = 0; i < l.size(); ++i){
        if(cnt == 0 && l[i] >= x){
            x = l[i];
            cnt++;
            continue;
        }
        if(x + 3 <= l[i]){
            cnt++;
            x = l[i];
        }
    }
    cout << cnt;
}