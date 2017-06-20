#include<cstdio>

int mins[31];
int maxs[31];
int ret[31];
int main(){
	int d, sumtime;
	int minsum = 0;
	int maxsum = 0;
	scanf("%d%d", &d, &sumtime);
	for(int i = 0; i < d; i++){
		scanf("%d%d", mins+i, maxs+i);
		minsum += mins[i];
		maxsum += maxs[i];
		ret[i] = maxs[i];
	}
	if(minsum <= sumtime && sumtime <= maxsum){
		puts("YES");
		while(maxsum != sumtime){
			for(int i = 0; i < d; i++){
				if(ret[i] > mins[i]){
					ret[i]--;
					maxsum--;
				}
				if(sumtime == maxsum) break;
			}
		}
		for(int i = 0; i < d; i++) printf("%d ", ret[i]);
		puts("");
	}
	else puts("NO");
}
