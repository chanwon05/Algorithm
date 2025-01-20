#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	queue <int> Q;

	while (n--) {
		string s;
		cin >> s;
		if (s == "push") {
			int dat;
			cin >> dat;
			Q.push(dat);
		}
		else if (s == "pop") {
			if (Q.empty())cout << -1 << '\n';
			else {
				cout << Q.front() << '\n';
				Q.pop();
			}
		}
		else if (s == "size") {
			cout << Q.size() << '\n';
		}
		else if (s == "empty") {
			cout << Q.empty() << '\n';
		}
		else if (s == "front") {
			if (Q.empty())cout << -1 << '\n';
			else cout << Q.front() << '\n';
		}
		else {
			if (Q.empty())cout << -1 << '\n';
			else cout << Q.back() << '\n';
		}
	}
}