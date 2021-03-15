#include <bits/stdc++.h>
using namespace std;
int main(){
    map <string, int> m;
    m.insert({"SAT", 1});
    m.insert({"FRI", 2});
    m.insert({"THU", 3});
    m.insert({"WED", 4});
    m.insert({"TUE", 5});
    m.insert({"MON", 6});
    m.insert({"SUN", 7});
    string s;
    cin >> s;
    cout << m[s];
}