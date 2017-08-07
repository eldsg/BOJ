#include <bits/stdc++.h>
using namespace std;
int n, num[10001], ret = 0, k, i, kk;
vector<int> lo, hi, ze;
int main(){
	scanf("%d", &n);
	for(int i = 0; i < n; i++){ 
		scanf("%d", &num[i]);
		if(num[i] == 0) ze.push_back(num[i]);
		else if(num[i] > 0) hi.push_back(num[i]);
		else lo.push_back(num[i]);
	}
	sort(lo.begin(), lo.end()); sort(hi.begin(), hi.end());
	int size = lo.size();
	if(size & 1){
		for(int i = 0; i < size-1; i+=2) ret += lo[i] * lo[i+1];
		if(ze.empty()) ret += lo[size-1];
	}
	else for(int i = 0; i < size; i+=2) ret += lo[i] * lo[i+1];
	size = hi.size();
	if(size & 1){
		ret += hi[0];
		for(int i = 1; i < size; i+=2){
			if(hi[i]+hi[i+1] > hi[i]*hi[i+1]) ret += hi[i]+hi[i+1];
			else ret += hi[i]*hi[i+1];
		}
	}
	else{
		for(int i = 0; i < size; i+=2){
			if(hi[i]+hi[i+1] > hi[i]*hi[i+1]) ret += hi[i]+hi[i+1];
			else ret += hi[i]*hi[i+1];
		}
	}
	printf("%d\n", ret);
	
}