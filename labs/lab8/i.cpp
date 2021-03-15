#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> n;
    int l, x , k;
    cin >> l;
    for(int i = 0; i < l; ++i){
        cin >> x;
        n.push_back(x);
    }
    cin >> k;
    vector <int> :: iterator it;
    it = find(n.begin(), n.end(), k);
    if(it != n.end()) cout << "Yes";
    else cout << "No";
}