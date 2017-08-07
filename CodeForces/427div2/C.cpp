#include <bits/stdc++.h>

using namespace std;

struct info{
	int x, y, s;
}star[100001];
int p[100001];
int n, q, c;
int cnt = 0;
int query(int node, int a1, int b1, int a2, int b2, int x1, int y1, int x2, int y2, int k) {
    if (x1 > a2 || y1 > b2 || x2 < a1 || y2 < b1 || a1 > a2 || b1 > b2) return 0;
    if (x1 <= a1 && y1 <= b1 && a2 <= x2 && b2 <= y2){
    	return (p[node]);
    } 
    int mx = 0;
    int a = query(4 * node - 2, a1, b1, (a1 + a2) / 2, (b1 + b2) / 2, x1, y1, x2, y2, k);
    int b = query(4 * node - 1, (a1 + a2) / 2 + 1, b1, a2, (b1 + b2) / 2, x1, y1, x2, y2, k);
    int c = query(4 * node + 0, a1, (b1 + b2) / 2 + 1, (a1 + a2) / 2, b2, x1, y1, x2, y2, k);
    int d = query(4 * node + 1, (a1 + a2) / 2 + 1, (b1 + b2) / 2 + 1, a2, b2, x1, y1, x2, y2, k);
    printf("%d %d %d %d\n", a, b, c, d);
    return mx;
}
int update(int node, int a1, int b1, int a2, int b2, int x, int y, int value) {
    if(a1 > a2 || b1 > b2) return 0;
    if(x > a2 || y > b2 || x < a1 || y < b1) return p[node];
    if(x == a1 && y == b1 && x == a2 && y == b2) return p[node] = value;
    int mx = 0;
    mx += update(4 * node - 2, a1, b1, (a1 + a2) / 2, (b1 + b2) / 2, x, y, value);
    mx += update(4 * node - 1, (a1 + a2) / 2 + 1, b1, a2, (b1 + b2) / 2, x, y, value);
    mx += update(4 * node + 0, a1, (b1 + b2) / 2 + 1, (a1 + a2) / 2, b2, x, y, value);
    mx += update(4 * node + 1, (a1 + a2) / 2 + 1, (b1 + b2) / 2 + 1, a2, b2, x, y, value);
    return p[node] = mx;
}

int main(){
	scanf("%d%d%d", &n, &q, &c);
	for(int i = 0; i < n; i++){
		scanf("%d %d %d", &star[i].x, &star[i].y, &star[i].s);
		update(1, 1, 1, 100, 100, star[i].x, star[i].y, star[i].s+1);
	}
	for(int i = 0; i < q; i++){
		int t, x0, x1, y0, y1;
		int ret = 0;
		cnt = 0;
		scanf("%d%d%d%d%d", &t, &x0, &y0, &x1, &y1);
		printf("q : %d\n", query(1, 1, 1, 100, 100, x0, y0, x1, y1, t));
		//printf(" %d\n", cnt);
	}
}