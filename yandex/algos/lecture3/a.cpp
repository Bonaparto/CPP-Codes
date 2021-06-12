#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
    unordered_set <int> s;
    int x;
    while(cin >> x) s.insert(x);
    cout << s.size();
}