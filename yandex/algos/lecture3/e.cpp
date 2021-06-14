#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
    int x, y, z, a;
    cin >> x >> y >> z >> a;
    unordered_set <int> s;
    while(a > 0)
    {   
        int now = a % 10;
        a /= 10;
        if(now != x && now != y && now != z) s.insert(now);
    }
    cout << s.size();
}