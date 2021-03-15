#include <iostream>
using namespace std;
  
string sq(string x){
    int sum = 0;
    for(int i = 0; i < x.length(); ++i)
        if(x[i] != '0') sum += x[i] - 48;
    return to_string(sum);
}
  
int main(){
    string s;
    cin >> s;
    if(s.length() == 1){
        cout << "NO";
        return 0;
    }
    for(int i = 1; i < s.length(); ++i){
        string s1 = s.substr(0, i);
        string s2 = s.substr(i);
        while(s1.length() >= 2) s1 = sq(s1);
        while(s2.length() >= 2) s2 = sq(s2);
        int a = stoi(s1), b = stoi(s2);
        if(a == b){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}