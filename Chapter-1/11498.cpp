#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x2, y2, x, y;

	cin >> n;
	while (n != 0) {
		cin >> x2 >> y2;

		while (n--) {
			cin >> x >> y;

			if (x == x2 || y == y2)
				cout << "divisa";
			else if (x < x2 && y > y2)
				cout << "NO";
			else if (x > x2 && y > y2)
				cout << "NE";
			else if (x > x2 && y < y2)
				cout << "SE";
			else if (x < x2 && y < y2)
				cout << "SO";
			cout << endl;

		}

		cin >> n;
	}
	return 0;
}
