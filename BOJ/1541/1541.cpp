#include <bits/stdc++.h>
using namespace std;
char str[51];
int main(){
	int ret = 0;
	bool chk = false;
	scanf("%s", str);
	for(int i = 0; str[i]; i++){
		if(str[i] >= '0' && str[i] <= '9'){
			string s; int num;
			while(str[i] >= '0' && str[i] <= '9'){
				s += str[i];
				i++;
			}
			num = stoi(s);
			i--;
			if(!chk) ret += num;
			else ret -= num;
			//printf("%d %d\n", ret, num);
		}
		else if(str[i] == '-') chk = true;
	}
	printf("%d\n", ret);
}