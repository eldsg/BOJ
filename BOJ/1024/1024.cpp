#include<cstdio>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	bool check = false;
	while(b<=100 && ((b*(b-1))/2)<=a){
		if(b%2 && a%b==0){
			check = true;
			for(int i = a/b-b/2; i<=a/b+b/2; i++) printf("%d ", i);
		}
		else if(!(b%2) && b/2 == a%b){
			check = true;
			for(int i = a/b+b/2-b+1; i<=a/b+b/2; i++) printf("%d ", i);
		}
		b++;
		if(check) break;
	}
	if(!check) printf("-1\n");
	
}
