#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int s[a][b]; 
    for(int x = 0; x < a; x++){
        for(int c = 0; c < b ; c++){
            if(x == 0 || c == 0) s[x][c] = 1;
            else s[x][c] = s[x-1][c] + s[x][c-1];
        }
    }
    for(int x = 0; x < a; x++){
        for(int c = 0; c < b; c++){
            cout << s[x][c] << "\t";
        }    
    cout << endl;
    }
}