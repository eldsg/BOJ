#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;

int line[500001];
int line2[500001];
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	for(int i = 0; i < a; i++){
		int t;
		scanf("%d", &t);
		if(i%2){
			line[t-1]++;
		}
		else{
			line2[b-t]++;
		}
	}
	sort(line, line+b);
	int ret = 0;
	for(int k = 0; k< b; k++){
		if(line[0] == line[k]) ret++;
		else break;
	}
	printf("%d %d\n", line[0], ret);
}
