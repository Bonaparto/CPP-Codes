#include <iostream>
using namespace std;
int main() {
  char n;
    cin >> n;
    if(int(n) > 96 && int(n) < 123){
      cout << char(int(n) - 32);
    }
    else cout << n;
}