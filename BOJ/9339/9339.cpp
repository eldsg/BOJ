#include<cstdio>
#include<map>
#include<iostream>
using namespace std;
map<int, int> hi;
int testcase;
int main(){
	scanf("%d", &testcase);
	while (testcase--){
		int num, number[101], innum, k = 1, best, count= 0;
		int bestt = 24, bestc = 60;
		scanf("%d", &num);
		for (int i = 0; i < num; i++){
			scanf("%d", &number[i]);
			hi[number[i]] = k++;
		}
		scanf("%d", &innum);
		while (innum--){
			int a, b, c;
			scanf("%d %d %d", &a, &b, &c);
			if (hi[a] && b != -1 && c != -1){
				if (b < 6) count++;
				else if (b == 6 && c == 0) count++;
				if (b < bestt || (b == bestt && c < bestc)){
					best = a;
					bestt = b;
					bestc = c;
				}
				else if (bestt == b && bestc == c){
					if (hi[a] < hi[best]){
						best = a;
					}
				}
			}
		}
		printf("%d %d\n", best, count);
	}
}