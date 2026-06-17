#include <bits/stdc++.h>

using namespace std;

void reverseString(string& s) {
	for (int i = 0, j = s.size() - 1; i < j; i++, j--) {
//		swap(s[i], s[j]);
		int tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}

int main()
{
	string s;
	getline(cin, s);
	reverseString(s);
	cout << s << endl;
	
	return 0;
}