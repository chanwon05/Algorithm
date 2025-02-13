#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n = 0;
	stack <char> s;
	string a;
	cin >> a;
	int size = a.length();
	for (int i = 0; i < size; i++) {
		if (a[i] == '(') {
			s.push(a[i]);
		}
		else if (a[i] == ')') {
			if (a[i-1] == '(') {
				s.pop();
				n += s.size();
			}
			else {
				s.pop();
				n++;
			}
		}	
	}
	cout << n;
	return 0;
}