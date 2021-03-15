#include <iostream>
using namespace std;
int main(){
int a,b;
cin >> a;
int s[a];
    for (int x = 3; x < a; x++){
        s[x] = s[x-1] + s[x-2];
        cout << s[x] << " ";
    }
}