#include<cstdio>
#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int num, k = 0;
		vector<int> check;
		scanf("%d", &num);
		while(num!=0){
			if(num%2) printf("%d ", k);
			num/=2;
			k++;
		}
		/*
//		check.push_back(1);
//		reverse(check.begin(), check.end());
//		for(int i = 0; i < check.size(); i++){
			if(check[i]) printf("%d ", i);
//			printf("%d ", check[i]);
		}
		*/
		printf("\n");
	}
}
