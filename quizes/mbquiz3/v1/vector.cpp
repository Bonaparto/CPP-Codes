#include <bits/stdc++.h>
using namespace std;

void terminal(vector <string>& l){
    for(int i = 0; i < l.size(); ++i){
        if(l[i] == "push" || l[i] == "pop" || l[i] == "clear"){
            cout << "OK" << endl;
        }
        
    }
}

int main(){
    string n;
    vector <string> l;
    while(n != "end"){
        cin >> n;
        l.push_back(n);
    }
    terminal(l);
}