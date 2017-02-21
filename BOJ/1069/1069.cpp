#include<cmath>
#include<cstdio>
#include<algorithm>
int main(){
	int a, b, c, d;
	while(scanf("%d %d %d %d", &a, &b, &c, &d) > 0){
		double dist = sqrt(a*a+b*b);
		int jump = dist / c;
		double remain = dist-jump*c;
		double ret = dist;
		ret = std::min(ret, remain+jump*d);
		if(jump > 0) ret = std::min(ret, (jump+1)*d*1.0);
		else{
			ret = std::min(ret, c-remain+d);
			if(dist < c) ret = std::min(ret, d*2.0);
		}
		printf("%.12lf\n", ret);
	}
}
