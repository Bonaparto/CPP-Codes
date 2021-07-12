#include <iostream>
#include <map>
using namespace std;
int main(){
    // ifstream fin("input.txt");
    // ofstream fout("output.txt");
    int n, ans;
    cin >> n;
    map <int, int> mp;
    for(int i = 0; i < n; ++i)
    {
        int w, h; cin >> w >> h;
        if(mp.find(w) == mp.end()) mp[w] = h;
        else if(mp[w] < h) mp[w] = h;
    }
    map <int, int> :: iterator it;
    for(it = mp.begin(); it != mp.end(); ++it)
    {
        ans += mp[(*it).first];
    }
    cout << ans;
}