#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int testcase;
	cin >> testcase;
	int H, W, B, floor, score;
	while (testcase != 0){
		cin >> H >> W >> B;
		floor = (B - 1) % H + 1;
		score = (B - 1) / H + 1;
		printf("%d%02d\n",floor,score);
		testcase--;
	}
}