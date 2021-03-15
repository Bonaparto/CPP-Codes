#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> b(n);    
    for(int j = 0; j < n; j++) cin >> b[j];
    vector <int> :: iterator it = unique(b.begin(), b.end());
    b.resize(distance(b.begin(), it));
    do{
        for(int i = 0; i < b.size(); i++) cout << b[i] << " ";
        cout << endl;
    } while(next_permutation(b.begin(), b.end()));
}