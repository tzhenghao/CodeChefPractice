#include <iostream>
#include <vector>

using namespace std;

void runTestCase() {

	string str;
	cin >> str;

	vector<int>letterVec(26, 0);

	int totalSum = 0;

	for (int i = 0; i < str.length(); ++i) {
		++totalSum;
		++letterVec[str[i] - 'a'];
	}

	for (int i = 0; i < letterVec.size(); ++i) {

		if (totalSum - letterVec[i] == letterVec[i]) {
			cout << "YES\n";
			return;
		}
	}

	cout << "NO\n";
}


int main() {

	int numTestCases = 0;
	cin >> numTestCases;

	for (int i = 0; i < numTestCases; ++i) {

		runTestCase();
	}

	return 0;
}
