#include <bits/stdc++.h>
using namespace std;

double gpa = 0;
int cred = 0;

void gpacalc(vector <double> a){
    int points = 0;
    cred += a[3];
    if(a[0] + a[1] >= 30 && a[2] >= 20){
        int points = a[0] + a[1] + a[2];
        double c = 2.0 / 3, b = 1.0 / 3;
        if(points >= 50 && points <= 54) gpa += a[3];
        if(points >= 55 && points <= 59) gpa += (1 + (b)) * a[3];
        if(points >= 60 && points <= 64) gpa += (1 + (c)) * a[3];
        if(points >= 65 && points <= 69) gpa += 2 * a[3];
        if(points >= 70 && points <= 74) gpa += (2 + (b)) * a[3];
        if(points >= 75 && points <= 79) gpa += (2 + (c)) * a[3];
        if(points >= 80 && points <= 84) gpa += 3 * a[3];
        if(points >= 85 && points <= 89) gpa += (3 + (b)) * a[3];
        if(points >= 90 && points <= 94) gpa += (3 + (c)) * a[3];
        if(points >= 95 && points <= 100) gpa += 4 * a[3];
    }
}

int main(){
    int n;
    cin >> n;
    vector <double> v;
    vector <vector <double> > vv;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < 4; ++j){
            int x; cin >> x;
            v.push_back(x);
        }
        vv.push_back(v);
        v.clear();
    }
    for_each(vv.begin(), vv.end(), gpacalc);
    cout << gpa / cred;
}