#include <iostream>
using namespace std;
int main(){
    long long x, x1;
    bool con = 1, asc = 1, wasc = 0, desc = 1, wdesc = 0;
    cin >> x1 >> x;
    while(x != -2e9 && x1 != -2e9){
        if(x > x1){
            con = 0;
            desc = 0;
            wasc = 1;
        }
        if(x < x1){
            con = 0;
            asc = 0;
            wdesc = 1;
        }
        if(x == x1){
            asc = 0;
            desc = 0;
        }
        x1 = x;
        cin >> x;
    }
    if(!con && !asc && ((wasc && wdesc) || (!wasc && !wdesc)) && !desc) cout << "RANDOM";
    else if(con && !asc && !wasc && !desc) cout << "CONSTANT";
    else if(asc) cout << "ASCENDING";
    else if(desc) cout << "DESCENDING";
    else if(!asc && wasc) cout << "WEAKLY ASCENDING";
    else if(!desc && wdesc) cout << "WEAKLY DESCENDING";
}