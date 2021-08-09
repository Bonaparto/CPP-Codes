#include <fstream>
#include <map>
using namespace std;
int main(){
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    string s;
    map <string, long long> mp;
    while(fin >> s)
    {
        string name; int sum;
        if(s == "DEPOSIT")
        {
            fin >> s >> sum;
            mp[s] += sum;
        }
        else if(s == "WITHDRAW")
        {
            fin >> s >> sum;
            mp[s] -= sum;
        }
        else if(s == "BALANCE")
        {
            fin >> s;
            if(mp.find(s) != mp.end()) fout << mp[s];
            else fout << "ERROR";
            fout << endl;
        }
        else if(s == "INCOME")
        {
            int p;
            fin >> p;
            map <string, long long> :: iterator it;
            for(it = mp.begin(); it != mp.end(); ++it)
            {
                if((*it).second > 0) mp[(*it).first] += (p * (*it).second) / 100;
            }
        }
        else
        {
            string name1;
            fin >> name >> name1 >> sum;
            mp[name] -= sum;
            mp[name1] += sum;
        }
    }
}