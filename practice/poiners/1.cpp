#include <bits/stdc++.h>
using namespace std;


void mm(map <int, int> *g){
    cout << g->size() << endl;
}

// void m(int x){
//     cout << &x << endl;
// }

// void r(vector <int> *t){
//     t->at(0) = 12;
//     for(int i = 0; i < t->size(); ++i){
//         cout << t-> at(i) << " ";
//     }
// }

// void v1(vector <int> t){
//     t[0] = 12;
//     for(int i = 0; i < t.size(); ++i){
//         cout << t[i] << " ";
//     }  
// }

// void k(int &t, int n){

// }

void p(){
    int var = 20;
    int *ptr;
    ptr = &var;

    cout << ptr << endl;
    cout << var << endl;
    cout << *ptr << endl;
}

void f(int *b, int n){
    b[0] = 10;
    for(int i = 0; i < n; ++i){
        cout << b[i] << " ";
    }
}


int main(){
    //vector <int> v({1, 2, 3, 4, 5});
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(int);
    //f(a, n);
    //cout << a[0] << endl;
    //p();
    //k(a, n);
    //r(&v);
    //int n = 8;
    //cout << &n << endl;
    //m()
    // map <int, int> m;
    // m.insert(make_pair(3, 4));
    // m.insert(make_pair(4, 3));
    // m.insert(make_pair(5, 5));
    // m.insert(make_pair(6, 8));
    // mm(&m);
    
}