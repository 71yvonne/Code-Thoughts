#include <bits/stdc++.h>

using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
	vector<int> ans;
	unordered_set<int> s, s2;
	for (int i = 0; i < nums1.size(); i++) s.insert(nums1[i]);
	for (int i = 0; i < nums2.size(); i++) {
		if (s.find(nums2[i]) != s.end()) s2.insert(nums2[i]);
	}
	
	for (auto it = s2.begin(); it != s2.end(); it++) ans.push_back(*it);
	return ans;
}

int main()
{
	int n1, n2, x; cin >> n1 >> n2;
	vector<int> nums1, nums2;
	
	for (int i = 0; i < n1; i++) {
		cin >> x;
		nums1.push_back(x);
	}
	for (int i = 0; i < n2; i++) {
		cin >> x;
		nums2.push_back(x);
	}
	
	vector<int> ans = intersection(nums1, nums2);
	for (int i = 0; i < ans.size(); i++) cout << ans[i] << ' ';
	
	return 0;
}