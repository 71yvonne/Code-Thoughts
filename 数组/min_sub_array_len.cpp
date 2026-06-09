#include <bits/stdc++.h>

using namespace std;

// 双指针解法，线性时间复杂度
int minSubArrayLen(int target, vector<int>& nums) {
	int i = 0, sum = 0, ans = 1e5 + 9;
	for (int j = 0; j < nums.size(); j++) {
		sum += nums[j];
		while (i <= j && sum >= target) {
			ans = min(ans, j - i + 1);
			sum -= nums[i];
			i++;
		}
	}
	
	return ans == 1e5 + 9 ? 0 : ans;
}

int main()
{
	vector<int> a(10);
	int t; cin >> t;
	for (int i = 0; i < 10; i++) cin >> a[i];
	cout << minSubArrayLen(t, a) << endl;
	
	return 0;
}