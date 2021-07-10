#include <fstream>
#include <map>
#include <vector>
using namespace std;
int main(){
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    string s, s1; int num;
    map <string, map<string, long long>> mp;
    while(fin >> s >> s1 >> num) mp[s][s1] += num;
    map <string, map<string, long long>> :: iterator it;
    map <string, long long> :: iterator it1;
    for(it = mp.begin(); it != mp.end(); ++it)
    {
        fout << (*it).first << ":" << endl;
        for(it1 = mp[(*it).first].begin(); it1 != mp[(*it).first].end(); ++it1)
        {
            fout << (*it1).first << " " << mp[(*it).first][(*it1).first] << endl; 
        }
    }   
}