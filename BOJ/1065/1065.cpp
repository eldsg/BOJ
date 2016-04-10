#include <iostream>
using namespace std;

int han, x,t,i,j;
int main(){
	cin >> han;
	for (i = 1; i <= han; i++){
		t = (i / 10) % 10 - i % 10;
		for (j = 10; j <= i; j *= 10){
			if ((i / j) % 10 - (i * 10 / j) % 10 != t){	x--; break;	}
		}
        x++;
	}
    cout << x << endl;
}