#include<cstdio>
#include<map>
#include<cstring>
std::map<char, char> change;

void init(){
	change['A'] = 'X';
	change['B'] = 'Y';
	change['C'] = 'Z';
	int k = 'A';
	for(int i = 'D'; i<='Z'; i++){
		change[i] = k++;
	}
}

int main(){
	char str[1001];
	init();
	scanf("%s", str);
	int size = strlen(str);
	for(int i = 0; i<size; i++){
		printf("%c", change[str[i]]);
	}
	printf("\n");
}
