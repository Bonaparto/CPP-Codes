#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n == 0){
        cout << 0;
        return 0;
    }
    string s = "";
    while(n != 0){
        s = char(n % 2 + 48) + s;
        n /= 2;
    }
    vector <int> v;
    for(int i = 0; i < s.length(); ++i){
        rotate(s.begin(), s.begin() + 1, s.end());
        int num = 0, x = 1;
        for(int j = s.length() - 1; j >= 0; --j){
            num += x * (s[j] - 48);
            x *= 2;
        } 
        v.push_back(num);
    }
    sort(v.begin(), v.end(), greater<int>());
    cout << v[0];
}