#include <iostream>
#include <set>
using namespace std;
int main(){
    int n, cnt = 0;
    cin >> n;
    set <string> se1, se;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        set <string> se2;
        string a[x+1];
        cnt = 0;
        for(int j = 0; j < x; ++j){
            string s; cin >> s;
            se.insert(s);
            se2.insert(s);
            if(i == 0) se1.insert(s);
        } 
        set <string> :: iterator it;
        for(it = se1.begin(); it != se1.end(); ++it){
            if(se2.find(*it) == se2.end()){
                a[cnt] = *it;
                cnt++;
                //cout << "wtf0" << endl;
            }
        }
        for(int i = 0; i < cnt; ++i)
        {
            //cout << "wtf" << endl;
            se1.erase(a[i]);
        }
        //cout << cnt << endl;
    }
    set <string> :: reverse_iterator it;
    cout << se1.size() << endl;
    for(it = se1.rbegin(); it != se1.rend(); ++it) cout << *it << endl;
    cout << se.size() << endl;
    for(it = se.rbegin(); it != se.rend(); ++it) cout << *it << endl;
}