#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
using namespace std;

void runTestCase() {

	string A, B;
	int wordMask = 0;

	unordered_set<char>letters;

	cin >> A;

	for (int i = 0; i < A.length(); ++i) {
		//wordMask |= (1 << (A[i] - 'a'));
		if (letters.find(A[i]) == letters.end()) {
			letters.insert(A[i]);
		}
	}

	cin >> B;

	for (int i = 0; i < B.length(); ++i) {

		//if ((wordMask >> (B[i] - 'a')) & 1) {
		if (letters.find(B[i]) != letters.end()) {
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
