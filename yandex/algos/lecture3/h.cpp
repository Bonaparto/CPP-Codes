#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
    int n;
    cin >> n;
    unordered_set <int> s;
    while(n--)
    {
        int x, y;
        cin >> x >> y;
        if(s.find(x) == s.end()) s.insert(x);
    }
    cout << s.size();
}