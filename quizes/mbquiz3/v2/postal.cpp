#include <iostream>
using namespace std;

bool validness(string l, int x){
    for(int i = 0; i < l.size(); ++i){
        if(i != x){
            if(l[i] < '0' || l[i] > '9')
            return 0;
        }
    }
    return 1;
}

int main(){
    int x,y;
    cin >> x >> y;
    string n;
    cin >> n;
    if(n.size() != x + y + 1 || n[x] != '-'){
        cout << "No";
        return 0;
    }
    cout << (validness(n, x)?"Yes":"No");
}