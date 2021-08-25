#include <bits/stdc++.h>

using namespace std;

vector<int> parseInts(string str) {
	// code starts here
  stringstream ss(str);
	vector<int> result;
	char ch;
	int tmp;

	while (ss >> tmp) {
		result.push_back(tmp);
		ss >> ch;
	}

	return result;
  // code ends here
}

int main() {
	string str;
	cin >> str;
	vector<int> integers = parseInts(str);

	for (int i = 0; i < integers.size(); i++) {
		cout << integers[i] << endl;
	}

	return 0;
}
