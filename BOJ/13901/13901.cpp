#include<cstdio>
#include<cstring>
bool mapp[1001][1001];
int r, c, a, initx, inity;
int direction[4];
bool check[4];
bool check2;
void doit(){
	int x = initx, y = inity;
	int prevx, prevy;
	int i = 0;
	mapp[x][y] = true;
	while(1){
	switch(direction[i]){
		case 1:
			check2 = false;
			for(int j = 0; j < 4; j++){
				if(check[direction[j]-1] == false) check2 = true;
			}
			if(!check2) break;
			if(x-1 >= 0 && !mapp[x-1][y]){
				x = x-1;
				mapp[x][y] = true;
				memset(check, false, sizeof(check));
			}
			else{
				check[direction[i]-1]=true;
				i++;
			}
			if(i>3)i=0;
			continue;
		case 2:
			check2 = false;
			for(int j = 0; j < 4; j++){
				if(check[direction[j]-1] == false) check2 = true;
			}
			if(!check2) break;
			if(x+1 < r && !mapp[x+1][y]){
				x = x+1;
				mapp[x][y] = true;
				memset(check, false, sizeof(check));
			}
			else {
				check[direction[i]-1]=true;
				i++;
			}
			if(i>3)i=0;
			continue;
		case 3:
			check2 = false;
			for(int j = 0; j < 4; j++){
				if(check[direction[j]-1] == false) check2 = true;
			}
			if(!check2) break;
			if(y-1 >= 0 && !mapp[x][y-1]){
				y = y-1;
				mapp[x][y] = true;
				memset(check, false, sizeof(check));
			}
			else {
				check[direction[i]-1]=true;
				i++;
			}
			if(i>3)i=0;
			continue;
		case 4:
			check2 = false;
			for(int j = 0; j < 4; j++){
				if(check[direction[j]-1] == false) check2 = true;
			}
			if(!check2) break;
			if(y+1 < c && !mapp[x][y+1]){
				y = y+1;
				mapp[x][y] = true;
				memset(check, false, sizeof(check));
			}
			else{
				check[direction[i]-1]=true;
				i++;
			}
			if(i>3)i=0;
			continue;
	}
		printf("%d %d\n", x, y);
		break;
	}
}

int main(){
	memset(mapp, false, sizeof(mapp));
	memset(check, false, sizeof(check));
	scanf("%d %d", &r, &c);
	scanf("%d", &a);
	for(int i = 0; i < a; i++){
		int x, y;
		scanf("%d %d", &x, &y);
		mapp[x][y] = true;
	}
	scanf("%d %d", &initx, &inity);
	scanf("%d %d %d %d", &direction[0], &direction[1], &direction[2], &direction[3]);
	doit();
}
