#include <iostream>
#include <map>
#include <unordered_set>
using namespace std;
int main(){
    int n, k, l = 0, r1 = 0, ansl, ansr, mins = 250001, cnt = 0;
    cin >> n >> k;
    int a[n]; 
    map <int, int> m;
    unordered_set <int> s;
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
        m[i] = 0;
    }
    while(r1 != n)
    {
        s.insert(a[r1]);
        m[a[r1]]++;
        cnt++;
        if(r1 != l && a[r1] == a[l])
        {
            while(m[a[l]] > 1)
            {
                m[a[l]]--;
                l++;
                cnt--;
            }
        }
        if(s.size() >= k && cnt >= k && cnt < mins)
        {   
            mins = cnt;
            ansl = l;
            ansr = r1;
            if(cnt == k) break;
        }
        r1++;
    }
    cout << ansl+1 << " " << ansr+1;
}