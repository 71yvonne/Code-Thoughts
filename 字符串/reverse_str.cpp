#include <bits/stdc++.h>

using namespace std;

// abcdefg, 2
// bacdfeg

string reverseStr(string s, int k) {
    int i = 0;
    while (i < s.size()) {
//        int r = s.size() <= i + k ? s.size() : i + k;
        int r = min(int(s.size()), i + k);
        for (int j = i, k = r - 1; j < k; j++, k--)
            swap(s[j], s[k]);
        i += 2 * k;
    }

    return s;
}

int main()
{
	string s; 
	int k;
	getline(cin, s);
	cin >> k;
	cout << reverseStr(s, k) << endl;
	
	return 0;
}