#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long a, b, c, d;
		cin >> a >> b >> c >> d;
		// check if their starting position is the same
		if (a == b) {
			// check if the values that will be added to them is equal
			if (c == d) {
				cout << "YES";
			} else {
				cout << "NO";
			}
		} else {
			// if the values have different starting positions, then the condition must check if
			// the distance between the two values can be covered up by the difference of the
			// values that will be added to them
			if (c != d && abs(a - b) % abs(c - d) == 0) {
				cout << "YES";
			} else {
				cout << "NO";
			}
		}
		cout << '\n';
	}
	return 0; 
}
