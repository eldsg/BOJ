#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <stdio.h>
#include <iomanip>
using namespace std;
struct point{
	int x, y;
};
point operator - (point p, point q) { return{ p.x - q.x, p.y - q.y }; }
int operator * (point p, point q) { return p.x*q.x + p.y*q.y; }
int operator ^ (point p, point q) { return p.x*q.y - p.y*q.x; }

double dist(point p, point q1, point q2) {
	if ((p - q1)*(q2 - q1) < 0) return sqrt((p - q1)*(p - q1));
	if ((p - q2)*(q1 - q2) < 0) return sqrt((p - q2)*(p - q2));
	return abs((p - q1) ^ (q2 - q1)) / sqrt((q2 - q1)*(q2 - q1));
}

int main() {
	int testcase;
	scanf("%d", &testcase);

	while (testcase--) {
		int a, b, c;
		scanf("%d", &a);
		vector<point> p1(a);
		for (int i = 0; i < a; i++){
			scanf("%d %d", &p1[i].x, &p1[i].y);
		}
		scanf("%d", &b);
		vector<point> p2(b);
		for (int i = 0; i < b; i++){
			scanf("%d %d", &p2[i].x, &p2[i].y);
		}
		double res = 1e100;
		for (int i = 0; i < p1.size(); i++)
		for (int j = 0; j < p2.size(); j++) {
			res = min(res, dist(p1[i], p2[j], p2[(j + 1) % p2.size()]));
			res = min(res, dist(p2[j], p1[i], p1[(i + 1) % p1.size()]));
		}
		printf("%.9lf\n", res / 2);
	}
}
