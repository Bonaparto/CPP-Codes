#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, d = 0, f = 0, e = 0;
    string c;
    cin >> c >> a >> b;
    char one[a][b];
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            one[i][j] = 'X';
        }
    }
    while (d < c.size()){
        one[f][e] = '*';
        if(c[d] == 'D'){
            one[f + 1][e] = '*';
             f++;
        }
        if(c[d] == 'U'){
            one[f - 1][e] = '*'; 
            f--;
        }
        if(c[d] == 'R'){
            one[f][e + 1] = '*';
            e++;
        }
        if(c[d] == 'L'){
            one[f][e - 1] = '*';
            e--;
        }
        d++;
    }
    for (int i = 0; i < a; i++){
        for (int j = 0; j < b; j++){
            cout << one[i][j];
        }
        cout << endl;
    }
}