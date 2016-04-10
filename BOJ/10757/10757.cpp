#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char a[20000];
char b[20000];
char c[20000];
char d[20000];
char result[20000];
int main(){
	int adder = 0, carry = 0;
	int t = 0, t1= 0, t2 = 0;
	scanf("%s %s", a, b);
	int k = strlen(a);
	int f = strlen(b);
	//printf("%d %d", k, d);
	for (int i = k-1; i >= 0; i--){
		c[t++] = a[i];
	}
	for (int i = f-1; i >= 0; i--){
		d[t1++] = b[i];
	}
	k = strlen(c);
	f = strlen(d);
	if (k > f){
		for (int i = t1; i < k; i++){
			d[i] = '0';
		}
		for (int i = 0; i < k; i++){
			adder = (c[i] - '0') + (d[i] - '0') + carry;
			result[t2++] = (adder % 10) + '0';
			carry = adder / 10;
		}
		if (carry != 0){
			result[t2++] = carry + '0';
		}
	}
	else if (k < f){
		for (int i = t; i < f; i++){
			c[i] = '0';
		}
		for (int i = 0; i < f; i++){
			adder = (c[i] - '0') + (d[i] - '0') + carry;
			result[t2++] = (adder % 10) +'0';
			carry = adder / 10;
		}
		if (carry != 0){
			result[t2++] = carry+'0';
		}
	}
	else{
		for (int i = 0; i < k; i++){
			adder = (c[i] - '0') + (d[i] - '0') + carry;
			result[t2++] = (adder % 10) + '0';
			carry = adder / 10;
		}
		if (carry != 0){
			result[t2++] = carry + '0';
		}
	}
	int last = strlen(result);
	for (int i = last-1; i >= 0; i--){
		printf("%c", result[i]);
	}
}