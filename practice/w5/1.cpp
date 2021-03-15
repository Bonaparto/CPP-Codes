#include <iostream>
using namespace std;
int main(){
    string lol;
    string kek("abce");
    getline(cin,lol);
    cout << lol.size() << endl;
    size_t start, len;
    cin >> start >> len;
    /*
    for(size_t i = 0; i < lol.size(); ++i){
        cout << int(lol[i]) << " ";
    } cout << endl; */
    
    //cout << lol.substr(0, 2);
    cout << lol.substr(len, start);
    cout << kek;
}