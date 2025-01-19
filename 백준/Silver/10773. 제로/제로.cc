#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N;
	cin >> N;
	stack<int> S;
	int sum = 0;

	while (N--) {
		int n;
		cin >> n;
		if (n == 0){
			sum -= S.top();
			S.pop();	
		}
		else {
			S.push(n);
			sum += n;
		}
	}

	cout << sum;

}