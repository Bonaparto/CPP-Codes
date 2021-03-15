#include <iostream>
using namespace std;

void op(string v, int x){
    int cnt = 0;
    bool l = false;
    for(size_t i = 0; i < v.size(); ++i){
        if(int(v[i]) > 46 && int(v[i]) < 58)
            cnt++;
        if(cnt == x){
            l = true;
            break;
        }
    }
    if(l == true) cout << "YES";
    else cout << "NO";
}

int main(){
    string v;
    int n;
    cin >> v;
    cin >> n;
    op(v,n);
}