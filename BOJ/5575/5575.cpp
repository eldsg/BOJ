#include<cstdio>

int h, m, s, h1, m1, s1;

int main(){
	for(int i = 0; i < 3; i++) {
		scanf("%d %d %d %d %d %d", &h, &m, &s, &h1, &m1, &s1);
		if(s1 < s){
			if(m1 == 0){
				h1-=1;
				m1+=59;
				s1+=60;
				s1-=s;
			}
			else{
				m1-=1;
				s1+=60;
				s1-=s;
			}
		}
		else s1-=s;
		if(m1 < m){
			h1-=1;
			m1+=60;
			m1-=m;
		}
		else m1-=m;
		h1-=h;
		printf("%d %d %d\n", h1, m1, s1);
	}
}
