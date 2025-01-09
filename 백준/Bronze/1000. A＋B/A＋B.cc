#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); // c stream 동기화 끊기 
	cin.tie(0);              // cin 명령어 전 cout 버퍼 비우지 않기

	int a, b;
	cin >> a >> b;
	cout << a + b;
	
	return 0;
}