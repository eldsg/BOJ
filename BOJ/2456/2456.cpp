#include<cstdio>

typedef struct s{
	int s, i;
	int count[4];
}s;

s sc[4];
s temp;
int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		sc[1].s+=a, sc[2].s+=b, sc[3].s+=c;
		sc[1].count[a]++, sc[2].count[b]++, sc[3].count[c]++;
	}
	sc[1].i = 1, sc[2].i = 2, sc[3].i = 3;
	for(int i = 1; i <= 3; i++){
		if(sc[i].s > temp.s){
			temp = sc[i];
		}
	}
	for(int i = 1; i <= 3; i++){
		if(i == temp.i) continue;
		if(sc[i].s == temp.s){
			if(sc[i].count[3] > temp.count[3]){
				temp = sc[i];
				continue;
			}
			else if(sc[i].count[3] == temp.count[3]){
				if(sc[i].count[2] > temp.count[2]){
					temp = sc[i]; continue;
				}
				else if(sc[i].count[2] == temp.count[2]){
					printf("0 %d\n", temp.s);
					return 0;
				}
			}
		}
	}
	printf("%d %d\n", temp.i, temp.s);

}
