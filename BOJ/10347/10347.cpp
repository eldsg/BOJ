#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
char change[100] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O',
	'P','Q','R','S','T','U','V','W','X','Y','Z','_','.',};
int main(){
	while(1){
		int num;
		char str[100];
		scanf("%d", &num);
		if(num == 0) break;
		scanf(" %s", str);
		int size = strlen(str);
		for(int i = size-1; i>=0; i--){
			if(str[i] == '_') printf("%c",change[(26+num)%28]);
			else if(str[i] == '.') printf("%c", change[(27+num)%28]);
			else printf("%c",change[(str[i]-'A'+num)%28]);
		}
		printf("\n");
	}
}
