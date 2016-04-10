#include<iostream>
using namespace std;
unsigned long long table[11][2001];
int main(){
	unsigned long long result, i, j, k, l;
	for(i = 1; i <= 2000; ++i){
		table[1][i] = i;	
	}
	for(i = 2; i <=10; ++i){
		table[i-1][0] = 0;
		for(j = 1; j <=2000; ++j){
			table[i][j] = 0;
			k = j/2;
			for(l=1; l<=k; ++l){
				result = table[i-1][l];
				result-=table[i-1][l-1];
				result*=(j-2*l+1);
				table[i][j] += result;		
			}
		}
	}
	int testcase;
	cin >> testcase;
	while(testcase--){
		int a, b;
		cin >> a >> b;
		if( 1 << (a-1) > b) cout << 0 << endl;
		else{
			cout << table[a][b] << endl;		
		}
	}
}
