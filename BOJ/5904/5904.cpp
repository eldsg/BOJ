#include <bits/stdc++.h>

using namespace std;

int moosize[100000];

int n, k;

void make(){
	moosize[0] = 3;
	for(k = 1; moosize[k-1] < n; k++){
		moosize[k] = moosize[k-1]*2 + (k+3);
	}
}	
char getpos(int a, int b){
	if(a == 0){
		if(b==1) return 'm';
		else return 'o';
	}
	if(b <= moosize[a-1]) return getpos(a-1, b);
	else if(b > moosize[a-1] && b < moosize[a-1]+a+3){
		if(b == moosize[a-1]+1) return 'm';
		else return 'o';
	}
	else return getpos(a-1, b-moosize[a-1]-a-3);
	
	
}
int main(){
	scanf("%d", &n);
	make();
	cout << getpos(k, n) << endl;

}