#include <iostream>
using namespace std;

void op(string v){
    for(size_t i = 0; i < v.size(); ++i){
        if((int(v[i]) != 97 && int(v[i]) != 101 && 
        int(v[i]) != 105 && int(v[i]) != 111
        && int(v[i]) != 117) && ( int(v[i]) != 65 && 
        int(v[i]) != 69 && int(v[i]) != 73 &&
        int(v[i]) != 79 && int(v[i]) != 85))
        cout << v[i];
    }
}

int main(){
    string v;
    getline(cin, v);
    op(v);
}