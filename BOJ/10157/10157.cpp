#include<cstdio>
#include<vector>

using namespace std;

vector<pair<int, int> > ret;

int main(){
	int a, b, c;
	scanf("%d %d\n%d", &a, &b, &c);
	if(a*b < c) printf("0\n");
	else{
		int d = a, e = b, x=1, y=1, aa=1, bb=1;
		for(int i = 0; i<a*b;){
			while(y!=e){
				ret.push_back(make_pair(x,y++));
				i++;
			}
			while(x!=d){
				 ret.push_back(make_pair(x++,y));
				i++;
			}
			while(y!=bb){
				 ret.push_back(make_pair(x,y--));
				i++;
			}
			while(x!=aa){
				ret.push_back(make_pair(x--,y));
				i++;
			}
			x++, y++;
			d-=1, e-=1, bb+=1, aa+=1;
		}
		printf("%d %d\n", ret[c-1].first, ret[c-1].second);
	}	
}
