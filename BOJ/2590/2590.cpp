#include <bits/stdc++.h>

using namespace std;

int main(){
	int one, two, three, four, five, six, ret = 0;
	scanf("%d%d%d%d%d%d", &one, &two, &three, &four, &five, &six);
	ret = four + five + six;
	one -= 11*five;
	two -= 5*four;
	if(three) ret += (three-1)/4+1;
	three%=4;
	if(three){
		one -= 8-three;
		two -= 7-2*three;
	}
	if(two > 0){
		ret += (two-1)/9+1;
		one -= 36-two%9+4;
	}
	else one += two*4;
	if(one > 0) ret += (one-1)/36+1;
	printf("%d\n", ret);
}