#include <bits/stdc++.h>
using namespace std;

struct spravochnik{
    int number;
    string name,
            surname,
            fname,
            adress,
            adress_n; 
};

bool numbers(spravochnik a, spravochnik b){
    return a.number > b.number;
}

int main(){
    int n, n1;
    cin >> n >> n1;
    spravochnik a[n];
    for(int i = 0; i < n; ++i){
        spravochnik b;
        cin >> b.number >> b.surname >> b.name >> b.fname >> b.adress >> b.adress_n;
        a[b.number] = b;
    }
    sort(a, a + n, numbers);
    for(int i = 0; i < n1; ++i){
        int y, l = 0, r = n; cin >> y;
        while(l < r){
            int mid = (l + r) / 2;
            if(a[mid].number == y){
                cout << a[mid].name << " (" << a[mid].adress << ")" << endl;
                break;
            }
            if(mid > l) l = mid + 1;
            else r = mid; 
        }
    }
}