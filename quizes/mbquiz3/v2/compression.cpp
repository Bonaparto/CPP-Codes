#include <iostream>
using namespace std;

string compression(string g){
    for(int i = 0; i < g.size(); ++i){
        for(int j = i + 1; j < g.size(); ++j){
            if(g[i] == g[j])
            g.erase(g.begin() + j);
        }
    }
    return g;
}

int main(){
    string n;
    cin >> n;
    cout << compression(n);
}