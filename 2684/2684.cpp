#include <iostream>
using namespace std;

int main(){
	int testcase, i, j;
	cin >> testcase;
	char TH[100] = { "\0" };
	for (i = 0; i < testcase; i++){
		int c0 = 0, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0;
		cin >> TH;
		for (j = 2; j < 40; j++){
			if (TH[j - 2] == 'T' && TH[j - 1] == 'T' && TH[j] == 'T') c0++;
			if (TH[j - 2] == 'T' && TH[j - 1] == 'T' && TH[j] == 'H') c1++;
			if (TH[j - 2] == 'T' && TH[j - 1] == 'H' && TH[j] == 'T') c2++;
			if (TH[j - 2] == 'T' && TH[j - 1] == 'H' && TH[j] == 'H') c3++;
			if (TH[j - 2] == 'H' && TH[j - 1] == 'T' && TH[j] == 'T') c4++;
			if (TH[j - 2] == 'H' && TH[j - 1] == 'T' && TH[j] == 'H') c5++;
			if (TH[j - 2] == 'H' && TH[j - 1] == 'H' && TH[j] == 'T') c6++;
			if (TH[j - 2] == 'H' && TH[j - 1] == 'H' && TH[j] == 'H') c7++;
		}
		cout << c0 << " " << c1 << " " << c2 << " " << c3 << " " << c4 << " " << c5 << " " << c6 << " " << c7 << endl;
	}
}
