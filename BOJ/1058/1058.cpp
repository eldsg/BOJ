#include<cstdio>

int dist[51][51];

int max(int i, int j){
	return i > j ? i : j;
}

int main(){
	int num;
	char t[51];
	scanf("%d\n", &num);
	for(int i = 0; i < num; i++){
		scanf("%s", t);
		for(int j = 0; j < num; j++) dist[i][j] = 1e9;
		for(int j = 0; t[j]; j++){
			if(t[j] == 'Y'){
				dist[i][j] = 1;
				dist[j][i] = 1;
			}
		}
	}
	for(int k = 0; k < num; k++){
		for(int i = 0; i < num; i++){
			if(k==i) continue;
			for(int j = 0; j < num; j++){
				if(k==j) continue;
				if(i==j) continue;
				int comp = dist[i][k] + dist[k][j];
				if(dist[i][j] > comp) dist[i][j] = comp;
			}
		}
	}
	int ret = 0;
	for(int i = 0; i < num; i++){
		int temp = 0;
		for(int j = 0; j < num; j++){
			if(dist[i][j] <= 2) temp++;
		}
		ret = max(ret, temp);
	}
	printf("%d\n", ret);
}
