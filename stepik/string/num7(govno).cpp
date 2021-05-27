    #include <iostream>
    using namespace std;
    int main(){
        string s;
        cin >> s;
        string a[4];
        if(s[0] < '0' || s[0] > '9' || s[s.length() - 1] < '0' || s[s.length() - 1] > '9' || s.length() < 7 || s.length() > 15){
            cout << "NO";
            return 0;
        }   
        string temp = ""; int cnt = 0;
        for(int i = 0; i < s.length(); ++i){
            if(s[i] == '.'){
                a[cnt] = temp;
                temp = "";
                cnt++;
                if(cnt > 3){
                    cout << "NO";
                    return 0;
                }
                continue;
            }
            else if(s[i] < '0' || s[i] > '9'){
                cout << "NO";
                return 0;
            }
            else if(i == s.length() - 1 && s[i] >= '0' and s[i] <= '9'){
                temp += s[i];
                a[cnt] = temp;
                break;
            }
            temp += s[i];
        }
        if(cnt < 3){
            cout << "NO";
            return 0;
        }
        for(auto x: a){
            if(x.length() == 0 || x.length() > 3){
                cout << "NO";
                return 0;
            }
            cout << x << " ";
            int z = 0, m = 1;
            for(int i = x.length() - 1; i >= 0; --i){
                z += m * int(x[i] - 48);
                m *= 10;
            } 
            if(z > 255){
                cout << "NO";
                return 0;
            }
        }   
        cout << "YES";
    }