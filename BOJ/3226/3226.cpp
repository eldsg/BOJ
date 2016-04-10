#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int t;
	int a, b,c,d,e,f, sum = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++){
		scanf("%d:%d %d", &a, &b, &c);
		int prev = sum;
		d = b + c;
		if (d>=60){
			if (a == 6){
				sum += 5 * (60 - b) + 10 * (d - 60);
			}
			else if (a == 18){
				sum += 10 * (60 - b) + 5 * (d - 60);
			}
			else{
				if (a >= 7 && a < 19){
					sum += 10 * c;
				}
				else sum += 5 * c;
			}
		}
		else if (d < 60){
			if (a>=7 && a < 19){
				sum += 10*c;
			}
			else sum += 5 * c;
		}
	}
	printf("%d\n", sum);
}