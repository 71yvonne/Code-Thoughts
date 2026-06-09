#include <bits/stdc++.h>

using namespace std;

// 生成螺旋矩阵
vector<vector<int>> generateMatrix(int n) {
	vector<vector<int>> ans(n, vector<int>(n));
	
	int k = 1, x = 0, y = 0;
	ans[x][y] = 1;
	
	while (k < n * n) {
		while (y + 1 < n && !ans[x][y + 1]) ans[x][++y] = ++k;
		while (x + 1 < n && !ans[x + 1][y]) ans[++x][y] = ++k;
		while (y - 1 >= 0 && !ans[x][y - 1]) ans[x][--y] = ++k;
		while (x - 1 >= 0 && !ans[x - 1][y]) ans [--x][y] = ++k;
	}
	
	return ans;
}

int main()
{
	int n; cin >> n;
	vector<vector<int>> a = generateMatrix(n);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " \n"[j == n - 1];
			
	return 0;
}