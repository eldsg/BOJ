#include <bits/stdc++.h>

using namespace std;
const int max_x = 1111;
const int max_y = 1111;
int tree[1111][1111], n, k, t, a, b, c, d;
int now[1111][1111];
void update(int x, int y, int val){
    int y1;
    while (x <= max_x){
        y1 = y;
        while (y1 <= max_y){
            tree[x][y1] += val;
            y1 += (y1 & -y1);
        }
        x += (x & -x);
    }
}
int sum(int x,int y){
    int sum= 0;        
    while( x){
        int y1 = y;
        while(y1){
           sum += tree[x][y1];
           y1 -= y1 & -y1;
        }
        x -= x & -x;
    }
    return sum;
}
int sumxtoy(int x0, int y0, int x1, int y1){
    return sum(x1, y1) - sum(x1,y0-1) - sum(x0-1, y1) + sum(x0-1, y0-1);
}

int main(){
	scanf("%d %d", &n, &k);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			scanf("%d", &now[i][j]);
			update(i, j, now[i][j]);
		}
	}
	for(int i = 1; i <= k; i++){
		scanf("%d", &t);
		if(t == 1){
			scanf("%d %d %d %d", &a, &b, &c, &d);
			printf("%d\n", sumxtoy(a, b, c, d));
		}
		else{
			scanf("%d%d%d", &a, &b, &c);
			update(a, b, c-now[a][b]);
			now[a][b] = c;
		}
	}
}