#include<cstdio>
#include<cstring>
int mm[51][51];
int n, s;
#define min(a,b) a > b ? b : a
int proc(int a){
	int m[51];
	memset(m, 0, sizeof(m));
	int r = 0;
	for(int i = 0; i < n; i++){
		int k, check = 0;
		if(i==a) continue;
		for(int j = 0; j < s; j++){
			if(mm[i][j] != 0){
				k = j;
				check++;
			}
		}
		if(check == 0) continue;
		else if(check == 1){
			m[k]++;
		}
		else{
			r++;
		}
	}
	for(int i = 0; i < s; i++){
		if(m[i] > 0) r += m[i]-1;
	}
	return r;
}

int main(){
	int ret = 1e9;
	scanf("%d%d", &n, &s);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < s; j++){\
			scanf("%d", &mm[i][j]);		
		}
	}
	for(int i = 0; i < n; i++){
		ret = min(ret, proc(i));
	}
	printf("%d\n", ret);
}
