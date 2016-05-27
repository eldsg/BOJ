#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<map>

int main(){
	int a, c;
	char color[100001];
	char tempcolor[100001];
	scanf("%d %d", &a, &c);
	scanf("%s", color);
	int len = strlen(color);
	for(int j = 0; j < c; j++){
		for(int i = 0; i < len; i++){
			int lp, rp;
			if(i-1 < 0) lp = len-1;
			else lp = i-1;
			if(i+1 > len-1) rp = 0;
			else rp = i+1;
			if(color[i] == 'R'){
				if(color[i] == color[lp] && color[i] == color[rp]){
					tempcolor[i] = 'B';
				}
				else if(color[i] != color[lp] && color[i] != color[rp] && color[lp] != color[rp]){
					tempcolor[i] = 'B';
				}
				else{
					if((color[lp] == 'R' && color[rp] == 'G') || (color[rp] == 'R' && color[lp] == 'G') || (color[lp] == 'B' && color[rp] == 'B')){
						tempcolor[i] = 'R';
					}
					else tempcolor[i] = 'G';
				}
			}
			else if(color[i] == 'G'){
				if(color[i] == color[lp] && color[i] == color[rp]){
					tempcolor[i] = 'B';
				}
				else if(color[i] != color[lp] && color[i] != color[rp] && color[lp] != color[rp]){
					tempcolor[i] = 'B';
				}
				else{
					if((color[lp] == 'G' && color[rp] == 'B') || (color[rp] == 'G' && color[lp] == 'B') || (color[lp] == 'R' && color[rp] == 'R')){
						tempcolor[i] = 'R';
					}
					else tempcolor[i] = 'G';
				}
			}
			else {
				if(color[i] == color[lp] && color[i] == color[rp]){
					tempcolor[i] = 'B';
				}
				else if(color[i] != color[lp] && color[i] != color[rp] && color[lp] != color[rp]){
					tempcolor[i] = 'B';
				}
				else{
					if((color[lp] == 'R' && color[rp] == 'B') || (color[rp] == 'R' && color[lp] == 'B') || (color[lp] == 'G' && color[rp] == 'G')){
						tempcolor[i] = 'R';
					}
					else tempcolor[i] = 'G';
				}
			}
		}
		for(int k = 0; k < len; k++){
			color[k] = tempcolor[k];
		}
	}
	int r = 0, g = 0, b = 0;
	for(int i = 0; i < len; i++){
		if(color[i] == 'R') r++;
		else if(color[i] == 'G') g++;
		else b++;
	}
	printf("%d %d %d\n", r, g, b);
}
