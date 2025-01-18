#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N;
	cin >> N;
	stack<int> S;

	while (N--) {
		string s;
		cin >> s;

		if (s == "push") {
			int data;
			cin >> data;
			S.push(data);
		}
		else if (s == "pop") {
			if (S.empty()) cout << -1 << '\n';
			else {
				cout << S.top() << '\n';
				S.pop();
			}
		}
		else if (s == "size") {
			cout << S.size() << '\n';
		}
		else if (s == "empty") {
			cout << (int)S.empty() << '\n';
		}
		else {
			if (S.empty()) cout << -1 << '\n';
			else
			cout << S.top() << '\n';

		}

	}



}