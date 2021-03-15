#include <iostream>
#include <set>
using namespace std;

int a[101][101], n;
bool f = 0;

void solve(int x, int y){
    set <int> s;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(s.insert(a[i+x][j+y]).second == false){
                cout << "Incorrect";
                f = 1;
                return;
            }
            s.insert(a[i+x][j+y]);
        }
    }
}

int main(){
    cin >> n;
    set <int> s1;
    for(int i = 0; i < n*n; ++i){
        s1.clear();
        for(int j = 0; j < n*n; ++j){
            cin >> a[i][j];
            if(s1.insert(a[i][j]).second == false || a[i][j] > n*n){
                cout << "Incorrect";
                return 0;
            }
            s1.insert(a[i][j]);
        }
    }
    for(int i = 0; i < n*n; ++i){
        s1.clear();
        for(int j = 0; j < n*n; ++j){
            if(s1.insert(a[j][i]).second == false){
                cout << "Incorrect";
                return 0;
            }
            s1.insert(a[j][i]);
        }
    }
    for(int i = 0; i < n*n; i += n){
        for(int j = 0; j < n*n; j += n){
            solve(i, j);
            if(f) return 0;
        }
    }
    cout << "Correct";
}