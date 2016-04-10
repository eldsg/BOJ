#include <iostream>
using namespace std;
int main()
{
	int testcase;
	cin >> testcase;
	int M, N, X, Y, temp,i;
	while (testcase != 0){
		cin >> M >> N >> X >> Y;
		for (i = 0; i < M; i++){
			temp = (i*N + Y) % M;
			if (temp == 0){
				temp = M;
			}
			if (temp == X){
				break;
			}
		}
		if (i == M){ cout << -1 << endl; }
		else cout << i*N + Y << endl;

		testcase--;
    }
}