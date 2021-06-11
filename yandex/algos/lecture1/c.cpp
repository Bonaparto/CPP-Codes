#include <iostream>
using namespace std;
int main(){
    string a[4], a1[4], a2[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    for(int i = 0; i < 4; ++i)
    {
        for(int j = 0; j < a[i].length(); ++j)
        {
            if(a[i][j] >= '0' && a[i][j] <= '9')
            {
                a1[i] += a[i][j];
            }
        }
    }
    for(int i = 0; i < 4; ++i)
    {   
        if(a1[i].length() == 7)
        {
            a2[i] = "8495";
            for(int j = 0; j < a1[i].length(); ++j)
            {
                a2[i] += a1[i][j];
            }
        }
        else if(a1[i].length() == 11)
        {
            a2[i] = "8";
            for(int j = 1; j < a1[i].length(); ++j)
            {
                a2[i] += a1[i][j];
            }
        }
    }
    for(int i = 1; i < 4; ++i)
    {   
        if(a2[0] == a2[i]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}