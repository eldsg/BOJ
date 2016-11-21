#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>

using namespace std;

int sang[500001];
int in;
int x, y;
int main(){
	scanf("%d", &x);
	for(int i = 0; i<x; i++){
		scanf("%d", &sang[i]);
	}
	sort(sang, sang+x);
	scanf("%d", &y);
	for(int i = 0; i<y; i++){
		scanf("%d", &in);
		if(binary_search(sang, sang+x, in)){
			printf("1 ");
		}
		else printf("0 ");
	}
}
