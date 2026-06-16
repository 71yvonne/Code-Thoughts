#include <bits/stdc++.h>

using namespace std;

// 链表节点
struct node
{
	int val; // 数据域
	node* next; // 指针域
	
	node() : next(nullptr) {}
};

// 初始化链表，返回头节点指针
node* init_list()
{
	node* head = new(node);
	return head;
}

// 头插法建表
node* create_list(node* head, int a[], int n)
{
	for (int i = 0; i < n; i++) {
		node* newnode = new(node);
		newnode->val = a[i];
		newnode->next = head->next;
		head->next = newnode;
	}
	
	return head;
}

// 遍历链表
void print(node* head)
{
	node* it = head->next;
	while (it) {
		cout << it->val << ' ';
		it = it->next;
	}
	
	cout << endl;
}

int main()
{
	int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	node* head = init_list();
	head = create_list(head, a, 10);
	print(head);
	
	return 0;
}