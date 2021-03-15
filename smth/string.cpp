#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string a[n];
    string ss;
    getline(cin, ss);
    for(int i = 0; i < n; ++i){
        getline(cin, a[i]);
    }
    for(int i = 0; i < n; ++i){
        cout << a[i] << endl;
    }
}