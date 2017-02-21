#include<cstdio>

typedef struct status{
	int hp, mp, at, def;
	int php, pmp, pat, pdef;
}status;

int main(){
	status temp;
	int tc;
	scanf("%d", &tc);
	while(tc--){
		status temp;
		scanf("%d %d %d %d %d %d %d %d", &temp.hp, &temp.mp, &temp.at, &temp.def, &temp.php, &temp.pmp, &temp.pat, &temp.pdef);
		int rhp = temp.hp+temp.php;
		int rmp = temp.mp+temp.pmp;
		int rat = temp.at+temp.pat;
		int rdef = temp.def+temp.pdef;
		if(rhp < 1) rhp = 1;
		if(rmp < 1) rmp = 1;
		if(rat < 0) rat = 0;
		printf("%d\n", rhp+rmp*5+rat*2+rdef*2);
	}
}
