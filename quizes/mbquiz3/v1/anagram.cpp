#include <iostream>
#include <algorithm>
using namespace std;

bool anagram(string x,string y){
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    return (x == y);
}

int main(){
    string n,m;
    cin >> n >> m;
    cout << (anagram(n,m)?"Yes":"No");
}