#include <iostream>
using namespace std;
int main(){
    int n, center = 0, center1 = -1, cnt = 0; bool f1 = 1, f2 = 0; cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
        while(f1)
        {
            if(center - cnt < 0 && center + cnt <= i)
            {
                f1 = 0;
                f2 = 1;
                cout << center << " f11 " << cnt << endl;
                cnt = 0;
                break;
            }
            else if(center + cnt > i) break;
            if(a[center-cnt] != a[center+cnt])
            {
                f1 = 0;
                f2 = 1;
                cout << a[center-cnt] << " f12 " << a[center+cnt] << endl;
                cnt = 0;
                break;
            }
            else cnt++;
        }
        while(f2)
        {   
            if(a[center] == a[center+1]) center1 = center + 1;
            else
            {
                cout << center << " f21 " << i << endl;
                // if(i == n - 1)
                // {
                //     center == i;
                //     cnt = 0;
                //     center1 = -1;
                //     break;
                // }
                center++;
                f1 = 1;
                f2 = 0;
                break;
            } 
            if(center - cnt < 0 && center1 + cnt <= i)
            {
                if(a[center])
                center++;
                center1 = -1;
                cnt = 0;
                f1 = 1;
                f2 = 0;
                break;
            }
            else if(center1 + cnt > i) break;
            if(a[center-cnt] != a[center1+cnt])
            {
                cout << center-cnt << " f23 " << center1+cnt << " " << i << " " << center << endl;
                if(i == n - 1)
                {
                    if(a[center1] == a[i])
                    {
                        center = center1;
                        center1 = i;
                        cnt = 0;
                        break;
                    }
                    else
                    {
                        center = i;
                        center1 = -1;
                        cnt = 0;
                        break;
                    }
                }
                center++;
                f1 = 1;
                f2 = 0;
                if(center1 + cnt != n - 1) cnt = 0;
                center1 = -1;
            }
            else cnt++;
        }
    }
    if(center == center1 - 1 && a[center] == a[center1]) cnt = 0;
    int k = n, k1 = -2;
    if(n % 2 == 0){
        k = n / 2;
        k1 = k - 1;
    }
    else k = (n - 1) / 2;
    cout << center << " " << k << " " << center1 << " " << cnt << endl; 
    if((center == k1 && center1 == k) || (center == k && k1 == -2 && center1 == -1)) cout << 0;
    else
    {
        cout << center << " " << cnt << endl;
        for(int i = center - cnt - 1; i >= 0; --i) cout << a[i] << " ";
    }
}