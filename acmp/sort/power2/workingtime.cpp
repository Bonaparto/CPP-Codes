#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <pair <string,string> > list;     
    vector <int> dates;               
    for(int i = 0; i < n; ++i){
        string x, y, f = ""; cin >> x >> y;
        f += x[3]; f += x[4]; f += x[0]; f += x[1];
        list.push_back(make_pair(f, y));
    }
    sort(list.begin(), list.end());
    for(int i = 0; i < n; ++i){
        int day = ((list[i].first[2] - 48) * 10 + list[i].first[3] - 48); int month = (list[i].first[1] - 48 + (list[i].first[0] - 48) * 10);
        int time = (((list[i].second[0] - 48) * 10 + list[i].second[1] - 48) * 60 + (list[i].second[3] - 48) * 10 + list[i].second[4] - 47);
        while(day != 0){
            time += 480; day--;
        } 
        while(month != 0){
            time += 14880; month--;
        }
        dates.push_back(time);
    }
    int ans = 0;
    for(int i = 1; i < n; i += 2) ans += dates[i] - dates[i - 1];
    int mm = n / 2 + (ans % 60); int hh = (ans - ans % 60) / 60;
    cout << hh << ":";
    if(mm < 10) cout << "0" << mm;
    else cout << mm;
}
