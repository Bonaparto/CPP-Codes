#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
    string s, ss;
    cin >> s >> ss;
    int ans = 0;
    unordered_set <string> us;
    for(int i = 0; i < ss.length()-1; ++i)
    {
        string temp = "";
        temp += ss[i];
        temp += ss[i+1];
        us.insert(temp);
    }
    for(int i = 0; i < s.length()-1; ++i)
    {
        string temp = "";
        temp += s[i];
        temp += s[i+1];
        if(us.find(temp) != us.end()) ans++;
    }
    cout << ans;
}