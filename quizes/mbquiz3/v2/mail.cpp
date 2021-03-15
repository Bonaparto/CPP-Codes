#include <iostream>
using namespace std;

bool validness(string g){
    for(int i = 0; i < g.size(); ++i){
        if(g[i] != '@'){
            if(g[i] < 'a' || g[i] > 'z'){
                return false;
            }
        }
        if(g[i] == '@'){
            if(i == 0) return false;
            for(int j = i + 1; j < g.size(); ++j){
                if(g[j] != '.'){
                    if(g[j] < 'a' || g[j] > 'z')
                    return false;
                }
                if(g[j] == '.'){
                    if(j - i == 1) return false;
                    for(int l = j + 1; l < g.size(); ++l){
                        if(g[l] < 'a' || g[l] > 'z')
                        return false;
                        if(l == g.size() - 1) return true;
                    }
                } 
            }
        }
    }
}

int main(){
    string n;
    cin >> n;
    cout << (validness(n)? "Yes":"No");
}