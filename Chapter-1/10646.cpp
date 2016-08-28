
#include <bits/stdc++.h>
using namespace std;

int getValue(string s) {
	int value;
	if(s[0] >= '2' && s[0] <= '9') value = s[0] - '0';
	else value = 10;

	return value;
}

int main()
{
	//testCases
	int t, i = 0, y = 0, j = 0;
	cin >> t;
	string s;
	vector<string> cards;

	for (int casenum = 0; casenum < t; casenum++) {
		cards.clear();
		y = 0;
		for(int i = 0; i < 52; i++) {
			cin >> s;
			cards.push_back(s);
		}

	    reverse(cards.begin(), cards.end());

		for(int i = 0; i < 3; i++) {
			int x = getValue(cards[25]);
			y += x;
			cards.erase(cards.begin()+25, cards.begin()+26+(10-x));
		}

		reverse(cards.begin(), cards.end());
		cout << "Case "<< casenum+1 <<": " << cards[y-1] << "\n";
	}

	return 0;
}
