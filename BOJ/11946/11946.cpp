#include<cstdio>
#include<algorithm>

using namespace std;

typedef struct team{
	int tn;
	int p;
	int count;
	int check[16];
	bool check2[16];
	void init(){
		p = 0;
		tn = 0;
		count = 0;
		for(int i = 0; i < 15; i++){
			check[i] = 0;
			check2[i] = false;
		}
	}
}team;

bool compareteam(team a, team b){
	if(a.count == b.count){
		if(a.p == b.p){
			return a.tn < b.tn;
		}
		else return a.p < b.p;
	}
	else return a.count > b.count;
}

int main(){
	team t[128];
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	for(int i = 0; i < a; i++){
		t[i].init();
		t[i].tn = i+1;
	}
	for(int i = 0; i < c; i++){
		int time, tn, pn;
		char d[10];
		scanf("%d %d %d %s", &time, &tn, &pn, d);
		if(t[tn-1].check2[pn-1]) continue;
		else{
			if(d[0] == 'A'){
				t[tn-1].count+=1;
				t[tn-1].p += t[tn-1].check[pn-1]*20+time;
				t[tn-1].check2[pn-1] = true;
			}
			else if(d[0] == 'R'){
				t[tn-1].check[pn-1]++;
			}
			else if(d[0] == 'T'){
				t[tn-1].check[pn-1]++;
			}
			else if(d[0] == 'W'){
				t[tn-1].check[pn-1]++;
			}
	
		}
	}
	sort(t, t+a, compareteam);
	for(int i = 0; i<a; i++){
		printf("%d %d %d\n", t[i].tn, t[i].count, t[i].p);
	}	
}
