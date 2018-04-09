#include <iostream>
#include <vector>
using namespace std;

void main() {
	int num;
	vector<int> NumberList;
	while (cin >> num) {
		NumberList.push_back(num);
	}
	cout << endl << endl;

	for (auto it = NumberList.begin(); it<NumberList.end(); it++) {
		for (auto k = it; k < NumberList.end(); k++) {
			if (*k >= *it) {
				int x;
				x = *it;
				*it = *k;
				*k = x;
			}
		}
	}


	cout << "ordered array" << endl;
	for (auto i : NumberList)cout << i << " ";
	cout << endl;
}



