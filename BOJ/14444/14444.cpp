#include <bits/stdc++.h>
using namespace std;
char str[100020];
char str2[200020];
int A[200020];
int main(){
	scanf("%s", str);
	int len = strlen(str);
	int r = -1, p = -1;
	for(int i = 0, k = 0; k < len; i++){
		if(!(i%2)) str2[i] = '#';
		else str2[i] = str[k++];
	}
	len = strlen(str2);
	str2[len++] = '#';
	//printf("%d\n", len);
	for(int i = 0; i < len; i++){
		if(i <= r) A[i] = min(A[2*p-i], r-i);
		else A[i] = 0;
		while(i-A[i]-1 >= 0 && i+A[i]+1 < len && str2[i-A[i]-1] == str2[i+A[i]+1]) A[i]++;
		/*
		for(int j = A[i]+1; i-j >= 0 && i+j < len; j++){
			if(str2[i-j] == str2[i+j]) A[i]++;
			else break;
		}
		*/
		if ( r < i+A[i]) r = i+A[i], p = i;
	}
	int ret = 0;
	for(int i = 0; i < len; i++){
		ret = max(ret, A[i]);
	}
	printf("%d\n", ret);
	/*
	for(int i = 0; i < len; i++) printf("%d ", A[i]);
	puts("");
	for(int i = 0; i < len; i++) printf("%c ", str2[i]);
	*/
}