#include <fstream>
#include <map>
using namespace std; 
int main()
{
    ifstream fin("input.txt");
    ofstream fout("output.txt");
    string s, ans; int maxf = 0;
    map <string, int> mp;
    while(fin >> s)
    {
        if(mp.find(s) == mp.end()) mp[s] = 1;
        else mp[s]++;
        if(mp[s] > maxf) maxf = mp[s];
    }
    map <string, int> :: iterator it;
    for(it = mp.begin(); it != mp.end(); ++it)
    {
        if(mp[(*it).first] == maxf)
        {
            fout << (*it).first;
            return 0;
        }
    }
}