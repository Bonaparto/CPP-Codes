#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string n, n1;
    cin >> n >> n1;
    if(n.size() != n1.size()){
        cout << "No";
        return 0;
    }
    vector<char> l;
    vector<char> l1;
    for(int i = 0; i < n.size(); ++i){
        l.push_back(tolower(n[i]));
    }
    for(int i = 0; i < n1.size(); ++i){
        l1.push_back(tolower(n1[i]));
    }
    sort(l.begin(), l.end());
    sort(l1.begin(), l1.end());
    for(int i = 0; i < l.size(); ++i){
        if(l[i] != l1[i]){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}