#include <bits/stdc++.h>

using namespace std;

int lengthOfLongestSubstring(string s)
{
	unordered_set<char> st;
	int i = 0, ans = 0;
	for (int j = 0; j < s.size(); j++) {
		// 若新加的元素已在集合中，从 i一直向后删，直到不出现 s[j]
		while (i < j && st.find(s[j]) != st.end()) {
			st.erase(s[i]);
			i++;
		}
		st.insert(s[j]);
		ans = max(ans, j - i + 1);
	}
	
	return ans;
}

int main()
{
	string s; getline(cin, s);
	cout << lengthOfLongestSubstring(s) << endl;
	
	return 0;
}