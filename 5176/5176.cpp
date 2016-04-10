#include <iostream>
using namespace std;

int main() {
	int k;
	cin >> k;
	bool machines[1000] = { 0 };
	for (int i = 0; i<k; i++) {
		int p, m;
		cin >> p >> m;
		int answer = 0;
		for (int z = 0; z<501; z++) {
			machines[z] = false;
		}
		for (int j = 0; j<p; j++) {
			int tmp;
			cin >> tmp;
			if (tmp < 501) {

				if (machines[tmp] == true) {
					answer++;
				}
				else {

					machines[tmp] = true;
				}
			}
		}
		cout << answer << endl;
	}
}
