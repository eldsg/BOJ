#include <bits/stdc++.h>

using namespace std;

int main(){
	int s, v1, v2, t1, t2;
	scanf("%d%d%d%d%d", &s, &v1, &v2, &t1, &t2);
	int f = 2*t1+s*v1;
	int ss = 2*t2+s*v2;
	if(f==ss) puts("Friendship");
	else if(f > ss) puts("Second");
	else puts("First");
}