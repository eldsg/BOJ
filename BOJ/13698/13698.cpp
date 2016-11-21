#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>

using namespace std;

char swp[201];
int ball[4] = {0, -1, -1, 1, };
int main(){
	scanf("%s", swp);
	int len = strlen(swp);
	for(int i = 0; i < len; i++){
		if(swp[i] == 'A'){
			swap(ball[0], ball[1]);
		}
		else if(swp[i] == 'B'){
			swap(ball[0], ball[2]);
		}
		else if(swp[i] == 'C'){
			swap(ball[0], ball[3]);
		}
		else if(swp[i] == 'D'){
			swap(ball[1], ball[2]);
		}
		else if(swp[i] == 'E'){
			swap(ball[1], ball[3]);
		}
		else{
			swap(ball[2], ball[3]);
		}
	}
	int min, max;
	for(int i = 0; i <4; i++){
		if(ball[i] == 0) min = i+1;
		if(ball[i] == 1) max = i+1;
	}
	printf("%d\n%d\n", min, max);
}
