#include <bits/stdc++.h>
using namespace std;

int Q[10001] = { 0 };
int head = 0, tail = 0;

void push(int x) {
	Q[tail++] = x;
}

void pop() {
	head++;
}

int empty() {
	if (tail - head == 0) return 1;
	else return 0;
}

int front() {
	 return Q[head];
}

int back() {
	return Q[tail-1];
}


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	

	while (n--) {
		string s;
		cin >> s;
		if (s == "push") {
			int dat;
			cin >> dat;
			push(dat);
		}
		else if (s == "pop") {
			if (empty())cout << -1 << '\n';
			else {
				cout << front() << '\n';
				pop();
			}
		}
		else if (s == "size") {
			cout << tail-head << '\n';
		}
		else if (s == "empty") {
			cout << empty() << '\n';
		}
		else if (s == "front") {
			if (empty())cout << -1 << '\n';
			else cout << front() << '\n';
		}
		else {
			if (empty())cout << -1 << '\n';
			else cout << back() << '\n';
		}
	}
}