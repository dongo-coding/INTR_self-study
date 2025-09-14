#include <iostream>
using namespace std;
int  main()
{
	int n;
	cin >> n;
	long long S = 0;
	for (int i = 1;i < n;i++) {
		if (n % i == 0) {
			S += i;
		}
	}
	if (S == n) {
		cout << "YES";
	}
	else cout << "NO";
}
