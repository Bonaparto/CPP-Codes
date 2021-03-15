#include <iostream>
using namespace std;

int a[1000];

void update(int l, int r, int x){
    for(int i = l - 1; i < r; ++i) a[i] = x;
}

void add(int l, int r, int x){
    for(int i = l - 1; i < r; ++i) a[i] += x;
}

int rsq(int l, int r){
    int sum = 0;
    for(int i = l - 1; i < r; ++i) sum += a[i];
    return sum;
}

int rmq(int l, int r){
    int min = l - 1;
    for(int i = l - 1; i < r; ++i){
        if(a[i] < a[min]) min = i;
    }
    return a[min];
}

int main(){
    int n, m;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    cin >> m;
    for(int i = 0; i < m; ++i){
        string s;
        cin >> s;
        int l, r, x;
        if(s == "rsq"){
            cin >> l >> r;
            cout << rsq(l, r) << endl;
        }
        if(s == "rmq"){
            cin >> l >> r;
            cout << rmq(l, r) << endl;
        }
        if(s == "get"){
            cin >> l;
            cout << a[l-1] << endl;
        }
        if(s == "add"){
            cin >> l >> r >> x;
            add(l, r, x);
        }
        if(s == "update"){
            cin >> l >> r >> x;
            update(l, r, x);
        }
    }
}