#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    set <char> n;
    string l;
    cin >> l;
    for(int i = 0; i < l.size(); ++i){
        n.insert(tolower(l[i]));
    }
    cout << n.size() << endl;
    
    set<char> :: iterator it;
    for(it = n.begin(); it != n.end(); ++it){
        cout << *it << " ";
    }
}   