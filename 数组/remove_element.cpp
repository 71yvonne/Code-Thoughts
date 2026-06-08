#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+9;
int n, item;
int a[N];

// 双指针法移除指定元素，线性时间复杂度
int remove_element()
{
	int j = 0; // j 表示新数组的末位置
	for (int i = 0; i < n; i++)
		if (a[i] != item) a[j++] = a[i];		
	
	return j; // 返回新的数组长度
}

int main()
{
	cin >> n >> item;
	for (int i = 0; i < n; i++) cin >> a[i];	
	int j = remove_element();
	for (int i = 0; i < j; i++) cout << a[i] << ' ';
	
	return 0;
}