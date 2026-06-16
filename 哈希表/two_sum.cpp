#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	unordered_map<int, int> mp;
	for (int i = 0; i < nums.size(); i++) {
		auto it = mp.find(target - nums[i]);
		if (it != mp.end()) return {mp[target - nums[i]], i};
		mp[nums[i]] = i;
	}    
	
	return {};
}

int main()
{
	vector<int> vec(7);
	int num; cin >> num;
	for (int i = 0; i < 7; i++)
		cin >> vec[i];
		
	vector<int> ans = twoSum(vec, num);
	if (ans.size())
		cout << ans[0] << ' ' << ans[1] << endl;
	else
		cout << "none" << endl;
	
	return 0;
}