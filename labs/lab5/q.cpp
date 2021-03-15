#include <iostream>
using namespace std;
int main(){
    string one,two;
    cin >> one >> two;
    int i = one.size(),l = 0;
    for(int i = one.size(); i <= two.size(); i = i + one.size()){
        if(two.size() % one.size() != 0){
            l = 0;
            break;
        }
        if(two.find(one) != string::npos) l = 1;
    }
    if(l == 0) //|| i + one.size() != two.size() + one.size())
    cout << "NO";
    else cout << "YES";
}