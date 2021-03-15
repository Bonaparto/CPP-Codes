#include <bits/stdc++.h>
using namespace std;

string sum(string x1, string x2){
    string ans = "";
    reverse(x1.begin(), x1.end());
    reverse(x2.begin(), x2.end());
    if(x1.length() == x2.length()){
        for(int i = 0; i < x1.length(); ++i){
            int x = x1[i] + x2[i] - 96;
            ans = to_string(x) + ans;
        }
        return ans;
    }
    else if(x1.length() > x2.length()){
        for(int i = 0; i < x2.length(); ++i){
            int x = x1[i] + x2[i] - 96;
            ans = to_string(x) + ans;
        }
        x1.erase(x1.begin(), x1.begin() + x2.length());
        reverse(x1.begin(), x1.end());
        ans = x1 + ans;
        return ans;
    }
    else{
        for(int i = 0; i < x1.length(); ++i){
            int x = x1[i] + x2[i] - 96;
            ans = to_string(x) + ans;
        }
        x2.erase(x2.begin(), x2.begin() + x1.length());
        reverse(x2.begin(), x2.end());
        ans = x2 + ans;
        return ans;
    }
}

int main(){
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    string ans1 = sum(s3, sum(s1, s2)), ans2 = sum(s2, sum(s1, s3)), ans3 = sum(s1, sum(s2, s3));
    if(ans1 != ans2){
        if(ans1.length() == ans2.length()) 
            cout << "YES" << endl << min(ans1, ans2) << endl << max(ans1, ans2);
        else if(ans1.length() > ans2.length()) cout << "YES" << endl << ans2 << endl << ans1;
        else cout << "YES" << endl << ans1 << endl << ans2;
    }
    else if(ans1 != ans3){
        if(ans1.length() == ans3.length()) 
            cout << "YES" << endl << min(ans3, ans1) << endl << max(ans1, ans3);
        else if(ans1.length() > ans3.length()) cout << "YES" << endl << ans3 << endl << ans1;
        else cout << "YES" << endl << ans1 << endl << ans3;
    }
    else if(ans3 != ans2){
        if(ans3.length() == ans2.length()) cout << "YES" << endl << min(ans3, ans2) << endl << max(ans3, ans2);
        else if(ans3.length() > ans2.length()) cout << "YES" << endl << ans2 << endl << ans3;
        else cout << "YES" << endl << ans3 << endl << ans2;
    } 
    else cout << "NO" << endl << ans1;
}