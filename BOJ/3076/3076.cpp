#include <iostream>
using namespace std;

int main(){
	int R, C, A, B, i, j;
	cin >> R >> C >> A >> B;
			for (i = 0; i < R*A; i++){
				for (int j = 0; j < B*C; j++){
					if ((i/A+j/B)% 2 == 0){
						cout << "X";
					}
					if ((i/A+j/B) % 2 == 1){
						cout << ".";
					}
				}
				cout << endl;
			}
}