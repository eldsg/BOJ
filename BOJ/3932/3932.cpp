#include<iostream>
#include<string>
using namespace std;
int main(){
	int testcase;
	cin >> testcase;
	while (testcase--){
		string a,b, tempstring;
		cin >> a;
		cin >> b;
		tempstring = b;
		int temp = a.size();
		int k = b.size();
		for (int i = temp - 1; i >= 0; i--){
			tempstring = b;
			if (a[i] == 'J'){
				b[0] = tempstring[k - 1];
				for (int j = 1; j < k; j++){
					b[j] = tempstring[j-1];
				}				
			}
			else if (a[i] == 'C'){
				for (int j = 0; j < k - 1; j++){
					b[j] = tempstring[j + 1];
				}
				b[k - 1] = tempstring[0];
			}
			else if (a[i] == 'E'){
				if (k % 2){
					int p = k / 2 + 1;
					for (int j = 0; j < k; j++){
						if (j < k/2) b[j] = tempstring[j + p];
						else if (j > k / 2){
							b[j] = tempstring[j - p];
						}
					}
				}
				else{
					int p = k / 2;
					for (int j = 0; j < k; j++){
						if (j < k / 2){
							b[j] = tempstring[j + p];
						}
						else {
							b[j] = tempstring[j - p];
						}
					}
				}
			}
			else if (a[i] == 'A'){
				for (int j = 0; j < k; j++){
					b[k - 1 - j] = tempstring[j];
				}
			}
			else if (a[i] == 'P'){
				for (int j = 0; j < k; j++){
					if (b[j] > '0' && b[j] <= '9'){
						b[j] -= 1;
					}
					else if (b[j] == '0'){
						b[j] = '9';
					}
				}
			}
			else if (a[i] == 'M'){
				for (int j = 0; j < k; j++){
					if (b[j] >= '0' && b[j] < '9'){
						b[j] += 1;
					}
					else if (b[j] == '9'){
						b[j] = '0';
					}
				}
			}
		}
		cout << b << endl;
	}
}