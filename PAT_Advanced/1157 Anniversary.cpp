//��Ī���������һ�ֿ�����hashing���ĸо� ��map���Եİ�
//����һ�����û���ǣ�a��Ϊ0 ʱ 
#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <vector> 
using namespace std;
bool cmp(string a, string b) {
	int a1 = stoi(a.substr(7, 8));
	int b1 = stoi(b.substr(7, 8));
	return a1 < b1;
}
int a[106] = {0};
int main() {
	int n, m;
	string s1[106], s2;
	scanf("%d", &n);
	vector<string> v;
	for (int i = 0; i < n; i++) 
		cin >> s1[i];
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		cin >> s2;
		for (int j = 0; j < n; j++)
			if(s2 == s1[j]) a[j] = 1;	
	}
	for (int i = 0; i < n; i++) 
		if (a[i] == 1) v.push_back(s1[i]);
	
	sort(v.begin(), v.end(), cmp);
	printf("%d\n", v.size());
	cout << v.front();
	return 0;
}