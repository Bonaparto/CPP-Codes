#include <iostream>
using namespace std;

string sort(string l){
    for(int i = 0; i < l.size() - 1; ++i){
        for(int j = i; j < l.size(); ++j){
            if(l[i] > l[j]){
                l[i] = l[i] + l[j];
                l[j] = l[i] - l[j];
                l[i] = l[i] - l[j];
            }
        }
    }
    return l;
}

int main(){
    string n;
    cin >> n;
    cout << sort(n);
}