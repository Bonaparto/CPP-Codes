#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool yep;
    string a;
    cin >> a;
    stack <char> s;
    for (int i = 0; i < a.size(); i++){
        if(a[i] == '(')
            s.push(a[i]);
        else if(a[i] == ')'){
            if(s.empty()){
                cout << "NO";
                return 0;
            }
            else if(s.top() == '(')
                s.pop();
        }
    }
    cout << (s.empty()?"YES":"NO");
}