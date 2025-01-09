#include <bits/stdc++.h>
using namespace std;

int main(void) 
{
	ios::sync_with_stdio(0);
	cin.tie(0); 
	int arr[10] = { 0, };
	int A, B, C;
	cin >> A >> B >> C;
	int N = A * B * C;

	while (N != 0)
	{
		arr[N%10]++;
		N = N / 10;
	}
	

	for (auto c : arr)
	{
		cout << c << "\n";
	}

	
}