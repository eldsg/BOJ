#include<stdio.h>
#include<math.h>
struct dot{
	int x;
	int y;
};

int main(){
	int testcase;
	scanf("%d", &testcase);
	while(testcase--){
		int size;
		int count = 0;
		dot a,b, temp;
		scanf("%d %d %d %d", &a.x, &a.y, &b.x, &b.y);
		scanf("%d", &size);
		while(size--){
			int dis;
			scanf("%d %d %d", &temp.x, &temp.y, &dis);
			int distance1 = (a.x-temp.x)*(a.x-temp.x)+(a.y-temp.y)*(a.y-temp.y);
			int distance2 = (b.x-temp.x)*(b.x-temp.x)+(b.y-temp.y)*(b.y-temp.y);
			if(distance1 < dis*dis && distance2 > dis*dis) count++;
			else if(distance1 > dis*dis && distance2 < dis*dis) count++;
		}
		printf("%d\n", count);
	}

}
