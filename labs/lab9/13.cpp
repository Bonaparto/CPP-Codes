#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    queue <string> b;
    vector <string> g;
    for(int i = 0; i < n; ++i){
        int x;
        cin >> x;
        if(x == 1){
            string y;
            cin >> y;
            b.push(y);
            g.push_back(b.front());
        }
        else{
            b.pop();
            if(b.empty()) g.push_back("queue is empty");
            else g.push_back(b.front());
        }
    }
    for(int i = 0; i < g.size(); ++i){
        cout << g[i] << endl;
    }
}