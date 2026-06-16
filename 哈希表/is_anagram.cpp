#include <bits/stdc++.h>

using namespace std;

// 有效的字母异位词
bool isAnagram(string s, string t) {
    unordered_map<char, int> mp_s, mp_t;
    for (int i = 0; i < s.size(); i++)
        mp_s[s[i]]++;
    for (int i = 0; i < t.size(); i++)
        mp_t[t[i]]++;

    if (mp_s.size() >= mp_t.size()) {
        for (auto it = mp_s.begin(); it != mp_s.end(); it++) {
            if (it->second != mp_t[it->first])
                return false;
        }
    } else {
        for (auto it = mp_t.begin(); it != mp_t.end(); it++) {
            if (it->second != mp_s[it->first])
                return false;
        }
    }
    
    return true;
}

int main()
{
	string s, t;
	getline(cin, s);
	getline(cin, t);
	cout << isAnagram(s, t) << endl;
	
	return 0;	
}