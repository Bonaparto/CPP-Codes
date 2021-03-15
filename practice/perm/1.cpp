#include <bits/stdc++.h>
using namespace std;

void perm(){
    int a[] = {1,2,3,4,5};
    
    int len = sizeof(a) / sizeof(int);
    
    do{
        for(int i = 0; i < len; ++i){
            cout << a[i];
        }
        cout << endl;
    }
    while(next_permutation(a, a + len));
}

void sort(){
    int a[] = {1,2,3,4,5};
    
    int len = sizeof(a) / sizeof(int);

    sort(a, a + len, greater<int>()); // greater - comparator - правило для сортировки
    
    for(int i = 0; i < len; ++i){
        cout << a[i] << " ";
    } 

    cout << endl;

    // for(int i = len - 1; i >= 0; --i){
    //     cout << a[i] << " ";
    // }
}

int main(){
    sort();
}