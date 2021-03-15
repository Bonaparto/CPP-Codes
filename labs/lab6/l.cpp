#include <iostream>
using namespace std;

void op(string v, int n){
    int cnt = 0;
    bool l = false;
    for(size_t i = 0; i < v.size(); ++i){
        if(int(v[i]) > 46 && int(v[i]) < 58)
            cnt++;
        else cnt = 0;
        
        if(cnt == n){
            l = true;
            break;
        }
    }
    if(l == true) cout << "Valid";
    else cout << "Not valid";
}

int main(){
    string v;
    int n;
    cin >> v;
    cin >> n;
    op(v,n);
}