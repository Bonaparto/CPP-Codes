#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> n;
    int l, x, y, y1;
    cin >> l;
    for(int i = 0; i < l; ++i){
        cin >> x;
        n.push_back(x);
    }
    cin >> y >> y1;
    n.insert(n.begin() + y, y1);
    for(int i = 0; i < n.size(); ++i){
        cout << n[i] << " ";
    }
}