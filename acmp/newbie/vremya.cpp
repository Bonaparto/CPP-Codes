#include <iostream>
using namespace std;
int main(){
    string a, b;
    int m = 0, h = 0;
    getline(cin, a);
    getline(cin, b);
    int cnt1 = 0, k1 = 0, l1 = 0;
    
    for(int i = 0; i < a.size(); ++i){
        if(a[i] == ':'){ break;}
        cnt1++; 
    }

    if(cnt1 == 1) k1 = int(a[0] - 48);
    else if(cnt1 == 2) k1 = int(a[0] - 48) * 10 + int(a[1] - 48);
    else if(cnt1 == 3) k1 = 100 + int(a[1] - 48) * 10 + int(a[2] - 48);
    if(a.size() - cnt1 == 2) l1 = int(a[cnt1+1] - 48);
    else if(a.size() - cnt1 == 3) l1 = int(a[cnt1+1] - 48) * 10 + int(a[cnt1+2] - 48);

    int k = 0, l = 0, cnt = 0;
    
    for(int i = 0; i < b.size(); ++i){
        if(b[i] == ' '){ break;}
        cnt++; 
    }

    if(cnt == 1) k = int(b[0] - 48);
    else if(cnt == 2) k = int(b[0] - 48) * 10 + int(b[1] - 48);
    else if(cnt == 3) k = 100 + int(b[1] - 48) * 10 + int(b[2] - 48);
    if(b.size() - cnt == 2) l = int(b[cnt+1] - 48);
    else if(b.size() - cnt == 3) l = int(b[cnt+1] - 48) * 10 + int(b[cnt+2] - 48);   
    
    int m1 = l1 + l, h1 = k1 + k;

    while(m1 >= 60){
        m1 -= 60;
        h1++;
    }
    while(h1 >= 24){
        h1 = h1 - 24;
    }   

    if(h1 >= 10) cout << h1 << ":";
    if(h1 < 10) cout << "0" << h1 << ":";
    if(m1 >= 10) cout << m1;
    if(m1 < 10) cout << "0" << m1;    
}