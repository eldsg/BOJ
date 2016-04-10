#include<iostream>
using namespace std;
int main(){
	int H, M;
	cin >> H >> M;
	if (M - 45 > 0){ 
		M = M - 45;
		H = H;
	}
	else if (M - 45 < 0){
		M = M + 60 - 45;
		H = H - 1;
	}
	if (H < 0){ H = 23; }
	cout << H << " " << M << endl;
}