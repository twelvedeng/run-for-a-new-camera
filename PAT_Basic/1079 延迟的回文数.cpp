#include <iostream>	
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string s, t;
	int cnt = 0;
	cin >> s;
	t = s;
	reverse(s.begin(), s.end());
	getchar();
	while (s != t && cnt < 10)	{
		int a = stoi(t), b = stoi(s);
	//	cout << t << " " << "+" << " " << s;
		printf(" = %d\n",a+b);
		s = to_string(a+b);
		t = s;
		reverse(s.begin(), s.end());
		cnt++;
	}
	if (s == t) {cout << s;	printf(" is a palindromic number.\n");}
	else
		printf("Not found in 10 iterations.\n");
	return 0;
}
