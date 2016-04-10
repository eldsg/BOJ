#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cstring>
#include<string>
#include<math.h>

#define ULL unsigned long long

using namespace std;

char bit[32];
ULL bitnum[11];
ULL result[11];
bool change(ULL num){
	memset(bitnum, 0, sizeof(bitnum));
	memset(result, 0, sizeof(result));
	for(int i = 0; num > 0; i++){
		bit[i] = num%2 + '0';
		if(bit[0] == '0') return false;
		num = num/2;
	}
	int size = strlen(bit);	
	cout << bit << endl;
	for(ULL i = 2; i<=10; i++){
		for(ULL j = 0, m = 1; j<size; j++, m*=i){
			bitnum[i] += (ULL)(bit[j]-'0') * m;
		}
		cout << bitnum[i] << " ";
	}
	cout << endl;
	for(int i = 0; i<size/2; i++){
		char temp = bit[i];
		bit[i] = bit[size-i-1];
		bit[size-i-1] = temp;
	}
	for(int i = 2; i<=10; i++){
		bool check = false;
		int count = 0;
		ULL llsqrt = sqrt(bitnum[i]);
		for(ULL j = 2; j <= llsqrt; j++){
			if(bitnum[i]%j == 0){
				result[i] = j;
				check = true;
				break;
			}
		}
		if(!check) return false;
	}
	return true;
}
int main(int argc, char* argv[]){
	FILE *file, *file2;
	int testcase,n ,b;
	file = fopen(argv[1], "r");
	file2 = fopen("output.txt", "w");
	fscanf(file, "%d", &testcase);
	for(int i = 0; i<testcase; i++){
		memset(bit, 0, sizeof(bit));
		fscanf(file, "%d %d", &n, &b);
		fprintf(file2, "Case #%d:\n", i+1);
		ULL num = 1, bitnum1 = num << n-1, bitnum2 = num << n;
		for(ULL j = bitnum1; j<bitnum2; j++){
			if(change(j)){
				b--;
				fprintf(file2, "%llu ", bitnum[10]);
				for(int k = 2; k<10; k++){
					fprintf(file2, "%llu ", result[k]);
				}
				fprintf(file2, "%llu\n", result[10]);
			}
			if(b==0) break;
		}
	}
}
