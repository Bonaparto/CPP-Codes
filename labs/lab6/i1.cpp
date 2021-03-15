#include <iostream>
using namespace std;
int main(){
    
    string str;

    cin >> str;

    for(int i=0; i < str.size(); i = i + 2){
        str[i] = toupper(str[i]);
    }

    cout << str;

    return 0;
}