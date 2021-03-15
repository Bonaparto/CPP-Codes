#include <bits/stdc++.h>
using namespace std;
int main(){
    string n, m;
    cin >> n >> m;
    int a = 0, a1 = 0, b = 0, b1 = 0;
    sort(n.begin(), n.end());
    sort(m.begin(), m.end());
    if(n[0] == '0'){
        for(int i = 1; i < n.size(); ++i){
            if(n[i] != '0' && n[i] != '-'){
                swap(n[i], n[0]); break;
            } 
        }   
    }
    if(n[0] == '-' && n[1] == '0'){
        for(int i = 2; i < n.size(); ++i){
            if(n[i] != '0'){
                swap(n[i], n[1]); break;
            }
        }
    }
    if(m[0] == '0'){
        for(int i = 0; i < m.size(); ++i){
            if(m[i] != '0' && m[i] != '-'){
                swap(m[i], m[0]); break;
            } 
        }   
    }
    if(m[0] == '-' && m[1] == '0'){
        for(int i = 2; i < m.size(); ++i){
            if(m[i] != '0'){
                swap(m[i], m[1]); break;
            }
        }
    }
    string x = n, y = m;
    sort(n.begin(), n.end(), greater<char>());
    sort(m.begin(), m.end(), greater<char>());
    int g = 1, h = 1;
    for(int i = n.size() - 1; i >= 0; --i){
        if(n[i] != '-'){ a += (g * (n[i]-48)); g *= 10;}
        if(x[i] != '-'){ a1 += ((x[i] - 48)* h); h *= 10;}
    }
    g = 1; h = 1;
    for(int i = m.size() - 1; i >= 0; --i){
        if(m[i] != '-'){ b += (g * (m[i] - 48)); g *= 10;}
        if(y[i] != '-'){ b1 += ((y[i] - 48) * h); h *= 10;}
    }
    if(x[0] == '-'){a *= -1; a1 *= -1;}
    if(y[0] == '-'){b *= -1; b1 *= -1;} 
    long long aa = a1 - b, bb = a - b, cc = a1 - b1, dd = a - b1;
    cout << max(max(aa,bb),max(cc,dd));
}