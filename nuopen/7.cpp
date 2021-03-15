#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    string n;
    cin >> n;
    int cnt = 0;
    for(int i = 1; i < n.size(); ++i){
        for(int j = i; j < n.size(); ++j){
            if(i + j <= x){
                if(n[j-i] == n[j] && n[j] == n[i+j])
                cnt++;
            }
        }
    }
    cout << cnt;
}