#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+9;
int t = 5, num;
int a[N];

int binary_search(int l, int r)
{
	while (l <= r)
	{
		int mid = l + r >> 1;
		if (a[mid] > num) r = mid - 1;
		else if (a[mid] < num) l = mid + 1;
		else return mid;
	}
	
	return -1;
}

int main()
{
	for (int i = 0; i < 10; i++) scanf("%d", a + i);
	while (t--)
	{
		cin >> num;
		cout << binary_search(0, 9) << endl;	
	}	
	
	return 0;
}