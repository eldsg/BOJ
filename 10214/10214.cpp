#include <iostream>
#include <vector>
using namespace std;
pair<int, int> base[10];
int main(){
	int testcase, i, temp=0, temp1 =0;
	for (cin >> testcase; testcase--; testcase != 0){
		for (i = 0; i < 9; i++){
			cin >> base[i].first >> base[i].second;
			temp += base[i].first;
			temp1 += base[i].second;
		}
		if (temp > temp1) cout << "Yonsei" << endl;
		else if (temp < temp1) cout << "Korea" << endl;
		else cout << "Draw" << endl;
	}
}