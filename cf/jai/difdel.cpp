#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        if(x == 1) cout << 6 << endl;
        if(x == 2) cout << 15 << endl;
    }
}