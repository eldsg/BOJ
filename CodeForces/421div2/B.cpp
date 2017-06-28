#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<map>
#include<vector>
#include<queue>
#include<algorithm>
#include<functional>
#include<string>
#include<cstring>
#include<cmath>

using namespace std;

#define ll long long
#define ull unsigned long long
#define mp make_pair
#define pb push_back

vector<double> ang;

int main(){
	long long a;
	double b;
	scanf("%lld%lf", &a, &b);
	double angle = ((a-2)*180)/(double)a;
	for(int i = 1; i < a-2; i++){
		ang.pb((angle*i)/(a-2));
	}
	ang.pb(angle);
	double min1 = 200;
	long long ret;
	sort(ang.begin(), ang.end(), greater<double>());
	for(int i = 0; i < ang.size(); i++){
		double t = fabs(ang[i]-b);
		if(min1 > t){
//			printf("%lld\n", t);
			min1 = t;
			ret = i+1;
		}
	}
	printf("1 %lld %lld\n", 1+ret, ret+2);

}
