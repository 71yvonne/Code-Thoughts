#include <bits/stdc++.h>

using namespace std;

// 有序数组的平方
vector<int> sortedSquares(vector<int>& nums) {
	vector<int> ans(nums.size());
	int k = nums.size() - 1;
	for (int i = 0, j = k; i <= j;) {
		if (nums[i] * nums[i] <= nums[j] * nums[j]) {
			ans[k--] = nums[j] * nums[j];
			j--;
		}
		else {
			ans[k--] = nums[i] * nums[i];
			i++;
		}
	}
	
	return ans;
}

int main()
{
	vector<int> a(10);
	for (int i = 0; i < 10; i++) cin >> a[i];
	vector<int> ans = sortedSquares(a);
	
	for (int i = 0; i < 10; i++) cout << ans[i] << ' ';
	
	return 0;
}