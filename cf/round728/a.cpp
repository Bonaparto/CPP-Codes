#include <iostream>
using namespace std;

void sol(int n)
{
    if(n == 2) cout << 2 << " " << 1;
    if(n == 3) cout << 3 << " " << 1 << " " << 2;
    //if(n == 4) cout << 2 << " " << 1 << " " << 4 << " " << 3;
    if(n > 3)
    {   
        if(n % 2 != 0)
        {
            cout << 3 << " " << 1 << " " << 2 << " ";
            for(int i = 4; i <= n; ++i)
            {
                if(i % 2 == 0) cout << i + 1 << " ";
                else cout << i - 1 << " ";
            }
        }
        else
        {
            for(int i = 1; i <= n; ++i)
            {
                if(i % 2)
                cout << i + 1 << " ";
                else
                cout << i - 1 << " ";
            }
        }
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio();
    cin.tie(0);
    int n;
    cin >> n;
    while(n--)
    {
        int x; cin >> x;
        sol(x);
    }
}