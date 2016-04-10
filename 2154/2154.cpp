#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
using namespace std;

int main(){
	vector<int> result;
	char buf[100001];
	char buf2[100001];
	bool check = false;
	int a, c, k, i, j,mm =0;
	cin >> a;
	sprintf(buf2, "%d", a);
	int t = strlen(buf2);
	for (i = 1; i <= a; i++){
		sprintf(buf, "%d", i);
		c = strlen(buf);
		for (j = 0; j < c; j++){
			result.push_back(buf[j]);
		}
	}
	for (i = 0; i < result.size(); i++){
		mm = 0;
		check = false;
			if (result[i] == buf2[mm]){
				mm++;
				j = i + 1;
				while (mm != t){
					if (result[j] == buf2[mm]){
						j++;
						mm++;
					}
					else {
						check = true;
						break;
					}
				}
				if (!check){
					k = i;
					break;
				}
			}
	}
	cout << k+1 << endl;
}