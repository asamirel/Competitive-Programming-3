#include <bits/stdc++.h>
using namespace std;

int main() {
	int T, x, j = 1, i, k = 3;
	cin >> T;
	while(T--) {
		vector<int> v;
		i = 0, k = 3;
		while(k--) {
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		cout << "Case " << j++ << ": " << v[1] << "\n";
	}

	return 0;
}
