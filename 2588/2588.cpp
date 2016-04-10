#include <iostream>
using namespace std;
int main(){
	int m1, m2, i, mm1[4],mm2[4],result[4];
	cin >> m1 >> m2;
	mm1[2] = m1 / 100;
	mm2[2] = m2 / 100;
	mm1[1] = (m1 / 10) % 10;
	mm2[1] = (m2 / 10) % 10;
	mm1[0] = m1 % 10;
	mm2[0] = m2 % 10;
	for (i = 0; i < 3; i++){
		result[i] = m1 * mm2[i];
	}
	m2 = m1*m2;
	for (i = 0; i < 3; i++){
		cout << result[i] << endl;
	}
	cout << m2;
}