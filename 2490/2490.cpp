#include <iostream>
using namespace std;

int main(){
	int i,j;
	int num[5] = { 0 };
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			cin >> num[j];
		}
		if (num[0] == 0 && num[1] == 0 && num[2] == 0 && num[3] == 0){ cout << "D" << endl; }
		else if (num[0] == 0 && num[1] == 0 && num[2] == 0 && num[3] == 1){ cout << "C" << endl; }
		else if (num[0] == 0 && num[1] == 0 && num[2] == 1 && num[3] == 0){ cout << "C" << endl; }
		else if (num[0] == 0 && num[1] == 0 && num[2] == 1 && num[3] == 1){ cout << "B" << endl; }
		else if (num[0] == 0 && num[1] == 1 && num[2] == 0 && num[3] == 0){ cout << "C" << endl; }
		else if (num[0] == 0 && num[1] == 1 && num[2] == 0 && num[3] == 1){ cout << "B" << endl; }
		else if (num[0] == 0 && num[1] == 1 && num[2] == 1 && num[3] == 0){ cout << "B" << endl; }
		else if (num[0] == 0 && num[1] == 1 && num[2] == 1 && num[3] == 1){ cout << "A" << endl; }
		else if (num[0] == 1 && num[1] == 0 && num[2] == 0 && num[3] == 0){ cout << "C" << endl; }
		else if (num[0] == 1 && num[1] == 0 && num[2] == 0 && num[3] == 1){ cout << "B" << endl; }
		else if (num[0] == 1 && num[1] == 0 && num[2] == 1 && num[3] == 0){ cout << "B" << endl; }
		else if (num[0] == 1 && num[1] == 0 && num[2] == 1 && num[3] == 1){ cout << "A" << endl; }
		else if (num[0] == 1 && num[1] == 1 && num[2] == 0 && num[3] == 0){ cout << "B" << endl; }
		else if (num[0] == 1 && num[1] == 1 && num[2] == 0 && num[3] == 1){ cout << "A" << endl; }
		else if (num[0] == 1 && num[1] == 1 && num[2] == 1 && num[3] == 0){ cout << "A" << endl; }
		else if (num[0] == 1 && num[1] == 1 && num[2] == 1 && num[3] == 1){ cout << "E" << endl; }
	}
}