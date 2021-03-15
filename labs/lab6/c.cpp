#include <iostream>
#include <algorithm>
using namespace std;

int n;
int a[10000];
int b[10000];
void read(){
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }
    sort(a,a + n);
    sort(b,b + n);
}

int ops(){
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] == a[i-1] && i - 1 >= 0)
        continue;
        for(int j = 0; j < n; ++j){
            if(a[i] == b[j]) cnt++;
        }      
    }
    return cnt;
}

int main(){
    int n;
    read();
   cout << ops();
}