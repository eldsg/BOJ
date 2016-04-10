#include<iostream>
#include<vector>
#include<math.h>
#include<stdio.h>
#include<algorithm>
using namespace std;

#define MAX 10000

int main(){
	vector<int> happy(MAX+1,0);
	happy[1] = 1;
	vector<bool> prime(MAX+1, true);
	prime[1] = false;
	for(int i = 2; i<=sqrt(MAX+1); i++){
		if(prime[i]){
			for(int j = i+i; j<=MAX; j+=i){
				prime[j] = false;
			}
		}
	}
	int testcase;
	scanf("%d", &testcase);
	while(testcase--){
		int a, b;
		scanf("%d %d", &a, &b);
		if(!prime[b] || happy[b] == 2){
			printf("%d %d NO\n", a, b);
			continue;
		}
		if(happy[b] == 1){
			printf("%d %d YES\n", a, b);
			continue;
		}
		vector<int> seen;
		int k = b;
		do{
			seen.push_back(k);
			int sum = 0;
			while(k > 0){
				int d = k%10;
				k = k / 10;
				sum += d*d;
			}
			k = sum;
		}while(find(seen.begin(), seen.end(), k)==seen.end() && happy[k] == 0);
		for(vector<int>::iterator it = seen.begin(); it != seen.end(); it++){
			happy[*it] = happy[k];
		}
		if(happy[b] == 1){
			printf("%d %d YES\n", a, b);
		}
		else{
			printf("%d %d NO\n", a, b);
		}
	}
}
