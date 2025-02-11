#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	int cnt = 0;
	cin >> n;
	while (n--) {
		string a;
		cin >> a;
		stack <char> s;
		for (auto c : a) {
			if (!s.empty() && s.top() == c) s.pop();
			else s.push(c);
		}
		if (s.empty()) cnt++;
	}
	cout << cnt;
}