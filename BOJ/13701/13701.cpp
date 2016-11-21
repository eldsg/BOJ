#include<cstdio>
#include<cstdlib>
#include<map>
#include<bitset>
#include<iostream>

using namespace std;

bitset<33554433> check;

int main(){
	int a;
	while(~scanf("%d", &a)){
		if(!check.test(a)){
			printf("%d ", a);
			check.set(a);
		}
	}
}

