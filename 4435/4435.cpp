#include <iostream>
using namespace std;

int main(){
	int testcase, i, j;
	cin >> testcase;
	int gandal[6];
	int sauron[7];
	for (i = 0; i < testcase; i++){
		int gscore = 0;
		int sscore = 0;
		cin >> gandal[0] >> gandal[1] >> gandal[2] >> gandal[3] >> gandal[4] >> gandal[5];
		gscore = gandal[0] * 1 + gandal[1] * 2 + gandal[2] * 3 + gandal[3] * 3 + gandal[4] * 4 + gandal[5] * 10;
		cin >> sauron[0] >> sauron[1] >> sauron[2] >> sauron[3] >> sauron[4] >> sauron[5] >> sauron[6];
		sscore = sauron[0] * 1 + sauron[1] * 2 + sauron[2] * 2 + sauron[3] * 2 + sauron[4] * 3 + sauron[5] * 5 + sauron[6] * 10;
		if (gscore > sscore) { cout <<"Battle "<<i+1<<": Good triumphs over Evil" << endl;}
		else if (sscore > gscore) { cout << "Battle " << i+1 << ": Evil eradicates all trace of Good" << endl; }
		else cout << "Battle " << i+1 << ": No victor on this battle field" << endl;
	}

}