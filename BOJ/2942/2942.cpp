#include <bits/stdc++.h>

using namespace std;

vector<int> divisors;

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a%b);
}

int main(){
	int r, g;
	scanf("%d%d", &r, &g);
	int k = gcd(r, g);
	for(int i = 1; i * i <= k; i++){
		if(k % i == 0){
			divisors.push_back(i);
			if(i != k/i) divisors.push_back(k/i);
		}
	}
	int size = divisors.size();
	for(int i = 0; i < size; i++){
		printf("%d %d %d\n", divisors[i], r/divisors[i], g/divisors[i]);
	}
}