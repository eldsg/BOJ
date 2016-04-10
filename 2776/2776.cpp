#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		vector <int> a, b,c;
		vector<int>::iterator iter;
		int num1, num2,m;
		scanf("%d", &num1);
		for (int i = 0; i < num1; i++){
			scanf("%d", &m);
			a.push_back(m);
		}
		sort(a.begin(), a.end());
		scanf("%d", &num2);
		for (int i = 0; i < num2; i++){
			scanf("%d", &m);
			b.push_back(m);
		}
		for (int i = 0; i < num2; i++){
			if (binary_search(a.begin(), a.end(), b[i])){
				printf("1\n");
			}
			else printf("0\n");
		}
	}
}