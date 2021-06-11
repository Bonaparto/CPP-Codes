#include <iostream>
using namespace std;

int main(){
    int n, cnt = 0; cin >> n;
    int a[n], ans = n - 1;
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i)
    {   
        if(a[i] == a[n-1])
        {
            for(int j = i + 1; j < n - 1; ++j)
            {
                if(a[j] != a[n-j+i-1]) break;
                if(j == n - 2)
                {   
                    if(i == 0)
                    {
                        cout << 0;
                        return 0;
                    }
                    cout << i << endl;
                    for(int k = i - 1; k >= 0; --k) cout << a[k] << " ";
                    return 0;
                }
            }
        }
    }   
    int x = n - 1;
    if(a[n-1] == a[n-2]) x = n - 2;
    cout << x << endl;
    for(int i = x - 1; i >= 0; --i) cout << a[i] << " ";
}