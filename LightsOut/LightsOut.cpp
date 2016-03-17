#include <iostream>
#include <vector>

using namespace std;

void runTestCase() {
	
	int boardSize;

	cin >> boardSize;
	
	vector< vector<int> > board;
	
	// Populate board.
	for (int i = 0; i < board.size(); ++i) {

		string temp;
		cin >> temp;
			
		for(int j = 0; j < board[0].size(); ++j) {
			
			if (temp[j] == '1') {
				board[i].push_back(1);
			}
			else {
				board[i].push_back(0);
			}
		}
	}

	vector
}

int main() {

	int numTestCases = 0;

	cin >> numTestCases;

	for (int i = 0; i < numTestCases; ++i) {

		runTestCase();
	}

	return 0;
}
