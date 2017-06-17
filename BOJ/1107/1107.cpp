#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<cstring>
using namespace std;
int main(){
	bool chk[10];
	memset(chk, false, sizeof(chk));
	int num, er;
	scanf("%d %d", &num, &er);
	for(int i = 0; i < er; i++){
		int t;
		scanf("%d", &t);
		chk[t] = true;
	}
	int ret = abs(num-100);
	for(int i = 0; i <= 1000000; i++){
		bool chk2 = false;
		int temp = i;
		int l = 0;
		while(temp){
			if(chk[temp%10]){
				chk2 = true;
				break;
			}
			temp /= 10;
			l++;
		}
		if(i==0){
			l = 1;
			if(chk[0]) chk2 = true;
		}
		if(!chk2){
			ret = ret < (abs(num-i)+l) ? ret : (abs(num-i)+l);
		}
	}
	printf("%d\n", ret);

}
