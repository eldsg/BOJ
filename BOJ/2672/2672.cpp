#include<cstdio>
#include<vector>
#include<algorithm>
struct square{
	double x0, x1, y0, y1;
};

double proc(square a, square b, double ret){
	if(a.x0 > b.x1) return ret;
	if(a.x1 < b.x0) return ret;
	if(a.y0 > b.y1) return ret;
	if(a.y1 < b.y0) return ret;
	
	square t;
	t.x0 = std::max(a.x0, b.x0);
	t.y0 = std::max(a.y0, b.y0);
	double weight = std::min(a.x1, b.x1)-t.x0;
	double height = std::min(a.y1, b.y1)-t.y0;
	
	return ret-weight*height;
}

int main(){
	int n;
	double ret = 0;
	std::vector<square> sq;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		square a;
		double b, c, d ,e;
		scanf("%lf %lf %lf %lf", &b, &c, &d, &e);
		ret += d*e;
		a.x0 = b, a.x1 = b+d, a.y0 = c, a.y1 = c+e;
		sq.push_back(a);
		for(int j = 0; j < sq.size()-1; j++){
			ret = proc(sq[j], a, ret);
		} 
	}
	int compret = (int)ret;
	if((double)compret < ret) printf("%.2lf\n", ret);
	else printf("%d\n", compret);
}
