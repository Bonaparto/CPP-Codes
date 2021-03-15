#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    int x; cin >> x;
    for(int i = 0; i < x; ++i){
        int z, y; cin >> z >> y;
        for(int j = z - 1; j <= y - 1; ++j) cout << a[j] << " ";
        cout << endl;
    }
}