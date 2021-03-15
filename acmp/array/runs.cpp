#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int count = 1;
    if(s[0] > 'Z' || s[s.length() - 1] <= 'Z'){
        cout << "No";
        return 0;
    }
    for(int i = 1; i < s.length(); ++i){
        if(s[i] > 'Z') count++;
        if(count > 4){
            cout << "No";
            return 0;
        }
        if(s[i] <= 'Z' && s[i] >= 'A'){
            if(count < 2){
                cout << "No";
                return 0;
            }
            count = 1;
        }
    }
    cout << "Yes";
}