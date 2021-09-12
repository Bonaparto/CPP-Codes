#include <iostream>
using namespace std;
int main(){
    string s, s1, ans = "";
    cin >> s >> s1;
    int a[s.size()+1][s1.size()+1], max = 0;
    string b[s.size()+1][s1.size()+1];
    for(int i = 0; i <= s1.size(); ++i)
    { 
        a[0][i] = 0;
        b[0][i] = "";
    }
    for(int i = 0; i <= s.size(); ++i)
    {
        a[i][0] = 0;
        b[i][0] = "";
    }
    for(int i = 0; i < s.size(); ++i)
    {
        for(int j = 0; j < s1.size(); ++j)
        {
            if(s1[j] == s[i])
            {
                a[i+1][j+1] = a[i][j] + 1;
                b[i+1][j+1] = b[i][j] + s1[j];
            }
            else
            {
                a[i+1][j+1] = a[i][j];
                b[i+1][j+1] = b[i][j];
            }
            if(a[i+1][j+1] > max)
            { 
                max = a[i+1][j+1];
                ans = b[i+1][j+1];
            }
        }
    }   
    cout << ans;
}